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

package com.webkey.activity;


import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.AsyncTask;
import android.os.Bundle;

import android.preference.PreferenceManager;
import android.text.InputType;
import android.util.Log;
import android.view.View;
import android.view.Window;
import android.view.View.OnClickListener;
import android.widget.CompoundButton;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;
import com.webkey.Base64;
import com.webkey.BinIO;
import com.webkey.DynDnsSettings;
import com.webkey.Ipc;
import com.webkey.ManageUsers;
import com.webkey.R;

public class SettingsTab extends Activity implements OnClickListener{

	final String TAG = "Webkey_java";
	public SharedPreferences prefs;
	public SharedPreferences.Editor prefsEditor;

	Ipc ipc;
	Context mContext;
	
	boolean notifyBarPref = false;
	
	boolean ddusing = false;
	boolean ddrefresh = false;	
	private String ddUserName = "";
	private String ddDomain = "";
	private String ddPassword = "";	
	

	private String serverUsername=null;	
	
	@Override
	protected void onSaveInstanceState(Bundle outState) {
		    //No call for super(). Bug on API Level > 11.
	}
	@Override
	public void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		//super.onCreate(null);		
		setContentView(R.layout.settings_tab);
	    mContext = getApplicationContext();	    
	    ipc = new Ipc(mContext);
	                  
        findViewById(R.id.helpbutton).setOnClickListener(this);
		findViewById(R.id.changeusernamebutton).setOnClickListener(this);
		findViewById(R.id.edit_portbutton).setOnClickListener(this);
		findViewById(R.id.usingdyndns).setOnClickListener(this);
		findViewById(R.id.ddsettingsbutton).setOnClickListener(this);
		findViewById(R.id.servercheckbox).setOnClickListener(this);
		findViewById(R.id.autostartcheckbox).setOnClickListener(this);
		findViewById(R.id.notifisetting).setOnClickListener(this);
		findViewById(R.id.usersettingsbtn).setOnClickListener(this);
		findViewById(R.id.allow_remote_reg).setOnClickListener(this);
	}
	
	
	@Override
	public void onResume(){		
		super.onResume();
		
		//read the saved settings
		prefs = PreferenceManager.getDefaultSharedPreferences(getBaseContext());
		prefsEditor = prefs.edit();
		
		//indicate the saved settings
		((CompoundButton) findViewById(R.id.servercheckbox)).setChecked(prefs.getBoolean("server", false));
		((CompoundButton) findViewById(R.id.autostartcheckbox)).setChecked(prefs.getBoolean("autostart", true));
		((CompoundButton) findViewById(R.id.notifisetting)).setChecked(prefs.getBoolean("statusbar", true));
		((CompoundButton) findViewById(R.id.allow_remote_reg)).setChecked(prefs.getBoolean("allowremotereg", true));
		 
		serverUsername = prefs.getString("username", "");
		notifyBarPref=prefs.getBoolean("statusbar", true);
		
        //dyndns settings
		//ddrefresh azert kell mert ha valtozik a beallitas arrol ertesiteni kell a backendet.
        ddrefresh = prefs.getBoolean("ddchange", false);        
        ddUserName = prefs.getString("ddusername", "");
        ddDomain = prefs.getString("dddomain", "");
        ddPassword = prefs.getString("ddpassword", "");
        ddusing = prefs.getBoolean("ddusing", false);
		       	
		
        if(ddUserName.equals("") || ddPassword.equals("") || ddDomain.equals("")){
        	((CompoundButton) findViewById(R.id.usingdyndns)).setChecked(false);
        	ddusing = false;
        }else{
        	((CompoundButton) findViewById(R.id.usingdyndns)).setChecked(ddusing);
        }
               
        //fontos, hogy a refres a ddusing check UTAN legyen!!!                  
        refresh();                
	}
	
    @Override
    protected void onPause() {
    	super.onPause();
    }
    

	public void onClick(View v) {
		prefs = PreferenceManager.getDefaultSharedPreferences(getBaseContext());
		prefsEditor = prefs.edit();
//		Log.d("Webkey_java: ","Clicked...");
        switch (v.getId()) {
        	case R.id.helpbutton:						    			
    			showDialog(getString(R.string.main_help_txt)+getString(R.string.main_translators),getString(R.string.main_help));  
    			break;
    			
        	case R.id.changeusernamebutton:
				showUsernameDialog();
        		break;
        		
        	case R.id.edit_portbutton:
        		showPortDialog();
    			break;
    		
        	case R.id.ddsettingsbutton:
        		Intent settingsActivity = new Intent(getBaseContext(), DynDnsSettings.class);
		        startActivity(settingsActivity);
		        break;
		        
        	case R.id.usingdyndns:
		        if (((CompoundButton) findViewById(R.id.usingdyndns)).isChecked()) {		
					//Validacio teszt
					if(ddUserName.equals("") || ddPassword.equals("") || ddDomain.equals("")){			    		
			    		showDialog(getString(R.string.main_notvaliddd),getString(R.string.warning));
			    		((CompoundButton) findViewById(R.id.usingdyndns)).setChecked(false);
			    	}else{				
			    		prefsEditor.putBoolean("ddusing", true);
			    		prefsEditor.commit();
			            ddusing = true;
			    		String hash = ddUserName+":"+ddPassword;
			    		hash = Base64.encodeBytes(hash.getBytes());
			    		new DownloadFilesTask().execute("dyndns"+ddDomain+"&"+hash);
			    	}				
		            
		        }else{
		        	prefsEditor.putBoolean("ddusing", false);
		        	prefsEditor.commit();
		            ddusing = false;
		    		new DownloadFilesTask().execute("dyndns");
		    		//TODO: ext le kell ellenorizni, hgoy tenyleg le all e a frissites
					//ipc.comBin("dyndns"+ddDomain+"&STOP");
		        }
        		break;
        	
        	case R.id.servercheckbox:
        		boolean server=((CompoundButton) findViewById(R.id.servercheckbox)).isChecked();
	            if (server && serverUsername.length()==0)
	            	showUsernameDialog();
	            else if(serverUsername.length()!=0){
	            	prefsEditor.putBoolean("server", server);
            		prefsEditor.commit();	            
	            }
	            //ipc.server = serverCheckBox.isChecked();
	            ipc.comBinAuth("reread");
	            refresh();
	            break;
	            
        	case R.id.autostartcheckbox:
		        if (((CompoundButton) findViewById(R.id.autostartcheckbox)).isChecked()) {
		        	prefsEditor.putBoolean("autostart", true);	
		        }else{
		        	prefsEditor.putBoolean("autostart", false);		         
		        }
	        	prefsEditor.commit();
		        break;
		    
        	case R.id.allow_remote_reg:
        		boolean state = ((CompoundButton) findViewById(R.id.allow_remote_reg)).isChecked();
        		prefsEditor.putBoolean("allowremotereg", state);
        		prefsEditor.commit();
//n        		Log.d("Webkey_java: ", "commit");
        		break;
        		
        	case R.id.notifisetting:
		        if (((CompoundButton) findViewById(R.id.notifisetting)).isChecked()) {
		        	notifyBarPref = true;
		        	prefsEditor.putBoolean("statusbar", true);
		        	prefsEditor.commit();
		        	if(ipc.runTest()){		    
		        	 ipc.notiyShow(mContext,"Running");
		        	}		        	
		        }else{
		        	notifyBarPref = false;
		        	prefsEditor.putBoolean("statusbar", false);
		        	prefsEditor.commit();
		            ipc.notiyDestroy(mContext);		            		            
		        }		        
        		break;
        		
        	case R.id.usersettingsbtn:
        		Intent UsersActivity = new Intent(getBaseContext(), ManageUsers.class);
                startActivity(UsersActivity);        		
        		break;
        }
		
	}
	
	public void refresh(){				
		prefs = PreferenceManager.getDefaultSharedPreferences(getBaseContext());
		prefsEditor = prefs.edit();
		if (ipc.runTest() == false){
			findViewById(R.id.edit_portbutton).setEnabled(true);
			findViewById(R.id.usersettingsbtn).setEnabled(false);
			ipc.notiyDestroy(mContext);
			ddrefresh = true;			
		}else{			    			    				
			findViewById(R.id.edit_portbutton).setEnabled(false);
			findViewById(R.id.usersettingsbtn).setEnabled(true);
					
			//egyebkent meg kell ez eggyaltaln?
			if(notifyBarPref){
				ipc.notiyShow(mContext, "Running");
			}
					
			//Ha valtozott a ddsettings es engedelyezve van a dd szolgaltatas akkor szolunk a backendnek
			if(ddusing && ddrefresh){
				String hash = ddUserName+":"+ddPassword;
				hash = Base64.encodeBytes(hash.getBytes()); 
				new DownloadFilesTask().execute("dyndns"+ddDomain+"&"+hash);
				prefsEditor.putBoolean("ddchange", false);
				prefsEditor.commit();
				ddrefresh = false;
			}
		}				
	}
		
	
	
	@Override
	public void onDestroy(){
		super.onDestroy();
	}
		
	
	private void showPortDialog() {
		final Dialog dialog = new Dialog(this);
		dialog.requestWindowFeature(Window.FEATURE_LEFT_ICON);
		dialog.setContentView(R.layout.main_setport_dialog);		
		dialog.setTitle(getString(R.string.main_portWindowTitle));
		final EditText input = (EditText) dialog.findViewById(R.id.edit_port);
		input.setText(ipc.port);
		final EditText sslinput = (EditText) dialog.findViewById(R.id.edit_sslport);
		sslinput.setText(ipc.sslport);
		
   		View buttonOK = dialog.findViewById(R.id.dialog_ok);   		
//		Log.d("Webkey_java: ","port dialog");
		buttonOK.setOnClickListener(new OnClickListener(){
			public void onClick(View v) {
        		final EditText input = (EditText) dialog.findViewById(R.id.edit_port);
        		final EditText sslinput = (EditText) dialog.findViewById(R.id.edit_sslport);
        		
        		String port = input.getText().toString();
	            String sslport = sslinput.getText().toString();
	            int valuePort = 0;
	            int valueSslPort = 0;
	            try{
	            	valuePort = Integer.parseInt( port );
	            	valueSslPort = Integer.parseInt( sslport );	            	
	            }catch (Exception e) {
//		Log.d("Webkey_java: ","port dialog: unable to parse");
	    			 showDialog(getString(R.string.main_invalidport),getString(R.string.warning)); 
				}	            
//		Log.d("Webkey_java: ","port dialog: ports"+valuePort+", "+valueSslPort);
		prefs = PreferenceManager.getDefaultSharedPreferences(getBaseContext());
		prefsEditor = prefs.edit();
	            
	    		 if(valuePort >0 && valuePort <=65535 && valueSslPort >0 && valueSslPort <= 65535 && valuePort != valueSslPort){
			    	 prefsEditor.putString("port",port);
			    	 prefsEditor.putString("sslport",sslport);
			    	 prefsEditor.commit();
			         ipc.port = port;
			         ipc.sslport = sslport;
			         refresh();
			         dialog.dismiss();
//		Log.d("Webkey_java: ","port dialog: saved");
	    		 }else{
	    			 showDialog(getString(R.string.main_invalidport),getString(R.string.warning)); 
	    		 }		
			}
			
		});

		View buttonCancel = dialog.findViewById(R.id.dialog_cancel);		
		buttonCancel.setOnClickListener(new OnClickListener() {			
			public void onClick(View v) {
				dialog.dismiss();
			}
		});
		
   		dialog.show();
 	    dialog.setFeatureDrawableResource(Window.FEATURE_LEFT_ICON, R.drawable.icon);
   		
	}
	
	private void showUsernameDialog() {		
	    AlertDialog.Builder alert = new AlertDialog.Builder(this);
	    alert.setTitle(R.string.main_usernametitle);
	    alert.setMessage(R.string.main_usernamemessage);
	     // Set an EditText view to get user input
	     final EditText input = new EditText(this);
	     input.setSingleLine(true);
	     input.setText(serverUsername);
	     input.setInputType(InputType.TYPE_CLASS_TEXT); 

	     alert.setView(input);
	     alert.setPositiveButton("Ok", new DialogInterface.OnClickListener() {
	    	 public void onClick(DialogInterface dialog, int whichButton) {  
		prefs = PreferenceManager.getDefaultSharedPreferences(getBaseContext());
		prefsEditor = prefs.edit();
	            String un = input.getText().toString();
	            String t = un.toLowerCase();
	            Boolean success = true;
	            if (t.length() == 0){
	    			 showDialog(getString(R.string.main_emptyusername),getString(R.string.warning));
			         success = false;
            	}
	            for (int i = 0; i < t.length();i++){
	            	char c = t.charAt(i);
	            	if ((c < 'a' || c > 'z') && (c < '0' || c > '9')){
		    			 showDialog(getString(R.string.main_alphabeticallowd),getString(R.string.warning));
				         success = false;
		    			 break;
	            	}
	            		
	            }
	            
	            if (success){
	     	       mContext = getApplicationContext();
	    	       BinIO binIO = new BinIO(mContext);
	    	       String resp = ipc.registerusername(getString(R.string.main_server), un, binIO.getCurrentVersionName());
	            	if (resp.equals("OK") == false){
	            		if (resp.equals("error") == false)
	            			showDialog(getString(R.string.main_unableregisterserver)+"\n"+resp,getString(R.string.warning));
	            		else
	            			showDialog(getString(R.string.main_unableregisterserver),getString(R.string.warning));
				         success = false;
	            	}
	            	else
	            	{
	            		Toast toast = Toast.makeText(mContext, R.string.main_unameregistered, Toast.LENGTH_LONG);	            		
		    			toast.show();
	            	}
	            }
		         if (success)
		         {
		        	 prefsEditor.putString("username",un);
		        	 prefsEditor.putBoolean("server",true);
		        	 prefsEditor.commit();
			         serverUsername = un;
		         }
		         else
		         {
		        	 if (serverUsername.length()==0)
		        	 {
		        		 //TODO: ha a refreshben benne van akkor nem is kell ez a findView
		        		 ((CompoundButton) findViewById(R.id.servercheckbox)).setChecked(false);
		        		 prefsEditor.putBoolean("server",false);
		        		 prefsEditor.commit();
		        	 }
		         }

    			 ipc.comBinAuth("reread");
		         refresh();
		         return;
	           }  
	        });  

	     alert.setNegativeButton(getString(R.string.btn_cancel), new DialogInterface.OnClickListener() {
	    	 public void onClick(DialogInterface dialog, int which) {
	    		 String un = input.getText().toString();
	    		 if(un.equals("") || serverUsername.equals("")){
	    			 ((CompoundButton) findViewById(R.id.servercheckbox)).setChecked(false); 
	    		 }
	    		 //ipc.comBin("reread");
	    		 //refresh();
			     return;   
	    	 }
	     });
	   alert.show();
	}
	
	private void showDialog(String message, String title) {
		AlertDialog.Builder alert = new AlertDialog.Builder(this);
	    alert.setNeutralButton("Ok", new DialogInterface.OnClickListener() {
	    	 public void onClick(DialogInterface dialog, int whichButton) {
	    		 
	    	 }
	     });
		alert.setIcon(R.drawable.icon);
		alert.setTitle(title);
		alert.setMessage(message);		
		alert.show();
	}
	
	
	 private class DownloadFilesTask extends AsyncTask<String, Void, String> {
		 
	     protected void onPostExecute(String message) {
	    	if(message != null && !message.equals("")){
	    			Toast t = Toast.makeText(mContext, message, Toast.LENGTH_LONG);
	    			t.show();
	    	}
	     }

		@Override
		protected String doInBackground(String... params) {
			return ipc.comBinAuth(params[0]);			
		}

	 }

}
