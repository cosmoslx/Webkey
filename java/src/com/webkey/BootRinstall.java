/*
Copyright (C) 2010  Peter Mora, Zoltan Papp

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

package com.webkey;
import java.io.File;

import android.content.BroadcastReceiver;  
import android.content.ComponentName;
import android.content.Context;  
import android.content.Intent;  
import android.content.SharedPreferences;
import android.content.pm.PackageManager;
import android.content.pm.PackageInfo;
import android.preference.PreferenceManager;  
import android.sax.StartElementListener;
import android.util.Log;

import com.webkey.Ipc;


public class BootRinstall extends BroadcastReceiver{
	public static Ipc ipc;
    @Override  
    public void onReceive(Context context, Intent intent) {  
    	//context.startService(new Intent(context, NetTest.class));
		ComponentName component=new ComponentName(context, NetTest.class);

		context.getPackageManager()
		    .setComponentEnabledSetting(component, PackageManager.COMPONENT_ENABLED_STATE_ENABLED,
		                                PackageManager.DONT_KILL_APP);
		
    	ipc = new Ipc(context);
        final SharedPreferences prefs = PreferenceManager.getDefaultSharedPreferences(context);
        boolean ASPref = prefs.getBoolean("autostart", true);
        boolean StatusBarPref = prefs.getBoolean("statusbar", true);
        
        String ddUserName = prefs.getString("ddusername", "empty");
        String ddDomain = prefs.getString("dddomain", "empty");
        String ddPassword = prefs.getString("ddpassword", "empty");
        boolean ddusing = prefs.getBoolean("ddusing", false);
        
        
//	Log.e("Webkey", "BOOTTEST before if ASPref");
	int version = -1;
	try {
		PackageManager manager = context.getPackageManager();
		PackageInfo info = manager.getPackageInfo(context.getPackageName(),0);
		version = info.versionCode;
	} catch (Exception e) {	}
//	Log.e("Webkey", "version = "+version);
        if(ASPref && (version == -1 || version > 306)){
//		Log.e("Webkey", "BOOTTEST before startService");
//		Log.e("Webkey", "ipc = "+ipc);
        	ipc.startService();
//		Log.e("Webkey", "BOOTTEST after startService");
        	        	
        	if(StatusBarPref || ddusing){
        		for (int i=0; i < 20 && !ipc.runTest(); i++){
        			try{
        				Thread.sleep(500);
			    	}catch(InterruptedException e){ }
        		}

       		
        		if(ipc.runTest()){
        			if(StatusBarPref){
        				ipc.notiyShow(context,"Service is running");
        			}
	    			if(ddusing){
	    				String hash = ddUserName+":"+ddPassword;
	    				hash = Base64.encodeBytes(hash.getBytes());
	    				//Log.d("Webkey","senddynup");
//	    				String message = ipc.comBinAuth("dyndns"+ddDomain+"&"+hash);
//	    				Log.d("Webkey",message);
	    			}
        		}
        	}
        	
        }

	}
    
}
