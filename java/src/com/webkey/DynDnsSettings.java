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

import android.content.SharedPreferences;
import android.content.SharedPreferences.OnSharedPreferenceChangeListener;
import android.os.Bundle;
import android.preference.PreferenceActivity;
import android.preference.PreferenceManager;

public class DynDnsSettings extends PreferenceActivity implements OnSharedPreferenceChangeListener  {
	public String dddomainOld;
	public String ddusernameOld;
	public String ddpasswordOld;
	public boolean change = false;
	SharedPreferences prefs;
	@Override
	protected void onCreate(Bundle savedInstanceState) {		
		super.onCreate(savedInstanceState);
		addPreferencesFromResource(R.layout.dyndnssettings);

        getPreferenceScreen().getSharedPreferences().registerOnSharedPreferenceChangeListener(this);
        prefs = PreferenceManager.getDefaultSharedPreferences(this);
        dddomainOld=prefs.getString("dddomain", "");
        ddusernameOld=prefs.getString("ddusername", "");
        ddpasswordOld=prefs.getString("password", "******");
        
		getPreferenceScreen().findPreference("dddomain").setSummary(dddomainOld);
		getPreferenceScreen().findPreference("ddusername").setSummary(ddusernameOld);
		getPreferenceScreen().findPreference("ddpassword").setSummary("******");
		}


	public void onSharedPreferenceChanged(SharedPreferences sharedPreferences, String key) {
		if (key.equals("dddomain")) {
			String tmp = String.valueOf(sharedPreferences.getString("dddomain", ""));
			if(!tmp.equals(dddomainOld)){
				getPreferenceScreen().findPreference("dddomain").setSummary(tmp);
				SharedPreferences.Editor ed = prefs.edit();
	            ed.putBoolean("ddchange", true);
	            ed.commit();

			}
		}else if (key.equals("ddusername")) {
			String tmp = String.valueOf(sharedPreferences.getString("ddusername", ""));			
			if(!tmp.equals(ddusernameOld)){
				getPreferenceScreen().findPreference("ddusername").setSummary(tmp);
				SharedPreferences.Editor ed = prefs.edit();
	            ed.putBoolean("ddchange", true);
	            ed.commit();
	            ddusernameOld=tmp;
	            if(!ddpasswordOld.equals("") && !tmp.equals("")){
		    		String hash = ddusernameOld+":"+ddpasswordOld;
		    		hash = Base64.encodeBytes(hash.getBytes());
		    		ed.putString("hash", hash);
		    		ed.commit();
	            }else{
	            	ed.putString("hash", "");
	            	ed.commit();
	            }
			}
			
		}else if (key.equals("ddpassword")) {
			String tmp = String.valueOf(sharedPreferences.getString("ddpassword", ""));
			if(!tmp.equals(ddpasswordOld)){
				getPreferenceScreen().findPreference("ddpassword").setSummary("*****");
				SharedPreferences.Editor ed = prefs.edit();
	            ed.putBoolean("ddchange", true);
	            ed.commit();
	            ddpasswordOld=tmp;
	            
	            if(!ddusernameOld.equals("") && !tmp.equals("")){
		    		String hash = ddusernameOld+":"+tmp;
		    		hash = Base64.encodeBytes(hash.getBytes());
		    		ed.putString("hash", hash);
		    		ed.commit();
	            }else{
	            	ed.putString("hash", "");
	            	ed.commit();
	            }
			}
			
		}
		
	}

}
