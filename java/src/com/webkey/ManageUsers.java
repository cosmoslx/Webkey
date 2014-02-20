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

import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.view.Window;
import android.view.View.OnClickListener;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.EditText;
import android.widget.ListView;
import android.widget.TextView;
import android.widget.AdapterView.OnItemClickListener;

public class ManageUsers extends Activity{
	Context context;
	private ListView mainListView;
	Ipc ipc;
	
	@Override
	protected void onSaveInstanceState(Bundle outState) {
		    //No call for super(). Bug on API Level > 11.
	}
	@Override
	public void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.manageusers);
		context =getApplication();
		ipc = new Ipc(context);
		mainListView = (ListView) findViewById( R.id.user_list);		
		//mu_allow_remote_reg

		
	}
	
	@Override
	public void onResume(){
		super.onResume();
		TextView et = new TextView(this);
		et.setText("New user");		
		
		try{
			Thread.sleep(500);
		}catch(InterruptedException e){ }

		final HashMap<String, Integer> userList = getUsers();
		final ArrayAdapter<String> adapter = new ArrayAdapter<String>(this,R.layout.userlistrow);
		adapter.add(getString(R.string.manage_userwindow_title));
		if(userList!=null){
			for(String key : userList.keySet()){
//				Log.d("Webkey_java: ",key);
				adapter.add(key);			
			}
		}
		
		mainListView.setAdapter(adapter);			
		mainListView.setOnItemClickListener(new OnItemClickListener() {
			public void onItemClick(AdapterView<?> arg0, View arg1, int position,long id){
				//new user
				if(position==0){
					showUsernamePasswordDialog();
				}else{
					String key = (String) adapter.getItem(position);
					functionsWindow(key, userList.get(key));
					//openUserRegistratorActivity(key, userList.get(key), null);
				}
			}
		});				
		
	}
	
	
	private HashMap<String, Integer> getUsers(){
		HashMap<String, Integer> userList = new HashMap<String, Integer>();
		String workDir=context.getFilesDir().getPath()+"/";
		try {
		  FileInputStream fstream = new FileInputStream(workDir+"/passwords.txt");
		  DataInputStream in = new DataInputStream(fstream);
		  BufferedReader br = new BufferedReader(new InputStreamReader(in));
		  String user= null;
		  while ((user = br.readLine()) != null)   {
			  String[] tmp = user.split(":");
			  //Log.d("Webkey_java",tmp[0]+":"+tmp[1]+":"+tmp[2]);
			  userList.put(tmp[0], Integer.parseInt(tmp[3]));			  
		    }
		  br.close();
		  in.close();
		  fstream.close();
		  return userList;
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return null;
	}

	private void functionsWindow(final String name, final Integer permission){
        final AlertDialog.Builder alert = new AlertDialog.Builder(this);        
        alert.setIcon(R.drawable.icon);
        alert.setTitle(name);                	    	   
        final AlertDialog alertD;
        final CharSequence[] PhoneModels = {getString(R.string.manage_user_edit_perm), getString(R.string.manage_user_changepassword), getString(R.string.manage_user_deleteuser)};
        alert.setSingleChoiceItems(PhoneModels, -1, new DialogInterface.OnClickListener(){
        	public void onClick(DialogInterface dialog, int item) {
        		if(item==0){
        			dialog.dismiss();
        			openUserRegistratorActivity(name, permission, null);        			
        		}else if(item==1){
        			changePassword(name);
        			dialog.dismiss();
        		}else{
        			dialog.dismiss();
        			deleteUserWindow(name);
        		}
        	}
        });
        alertD = alert.create();
        alertD.show();
	}
	
	private void deleteUserWindow(final String username){
	    AlertDialog.Builder alert = new AlertDialog.Builder(this);
	    alert.setTitle(R.string.warning);
	    alert.setMessage(R.string.manage_userdelete);	      	     
	    alert.setPositiveButton("Ok", new DialogInterface.OnClickListener() {
	    	 public void onClick(DialogInterface dialog, int whichButton) {
	    		 ipc.comBinAuth("setpassword",username+"\n");
	    		 onResume();
	    		 dialog.dismiss();
	           }  
	        });  

	    alert.setNegativeButton(getString(R.string.btn_cancel), new DialogInterface.OnClickListener() {
	    	 public void onClick(DialogInterface dialog, int which) {
	    		 dialog.dismiss();   
	    	 }
	     });
	   alert.show();
	}
	
	private void changePassword(final String username){
		
		final Dialog dialog = new Dialog(this);		
		dialog.requestWindowFeature(Window.FEATURE_LEFT_ICON);
		dialog.setContentView(R.layout.manageuser_password_dialog);
	    dialog.setTitle(getString(R.string.manage_user_changepassword)+"             ");	    
	    final EditText input = (EditText) dialog.findViewById(R.id.manageuser_password);	    
	    
	    dialog.findViewById(R.id.dialog_ok).setOnClickListener(new OnClickListener(){
	    	 public void onClick(View v) {
	    		 String password = input.getText().toString();
	    		 if(password!=null && !password.equals("")){
		    		 ipc.comBinAuth("setpassword",username+"\n"+password);	    		 
		    		 dialog.dismiss(); 
	    		 }
	           }
	        });  
		
	    dialog.findViewById(R.id.dialog_cancel).setOnClickListener(new OnClickListener() {		
	    	 public void onClick(View v) {
	    		 dialog.dismiss();   
	    	 }
	     });	   
	   
	   dialog.show();
	   dialog.setFeatureDrawableResource(Window.FEATURE_LEFT_ICON, R.drawable.icon);
		
	}
	
	private void openUserRegistratorActivity(String name, int permission, String password){
		Intent settingsActivity = new Intent(getBaseContext(), PreparePermissions.class);
		settingsActivity.putExtra("name", name);
		settingsActivity.putExtra("perm", permission);
		settingsActivity.putExtra("password", password);		
        startActivity(settingsActivity);
	}
	
	private void showUsernamePasswordDialog() {
		final Dialog dialog = new Dialog(this);
		dialog.requestWindowFeature(Window.FEATURE_LEFT_ICON);
		dialog.setContentView(R.layout.manageusers_newuser);
		//a window szelessege miatt kell felesleges space	
		dialog.setTitle(getString(R.string.manage_userwindow_title)+"        ");
					
   		View buttonOK = dialog.findViewById(R.id.dialog_ok);   		
		buttonOK.setOnClickListener(new OnClickListener(){
			public void onClick(View v) {
				// TODO Auto-generated method stub
        		final EditText eUsername = (EditText) dialog.findViewById(R.id.edit_username);        		
        		String username = eUsername.getText().toString();
        		final EditText ePassword = (EditText) dialog.findViewById(R.id.edit_password);
        		String password = ePassword.getText().toString();
        		if(!"".equals(username) && !"".equals(password) && username.matches("[a-zA-Z0-9 -]*") ){
        			openUserRegistratorActivity(username, -1, password);
            		dialog.dismiss();
        		}
			}
			
		});

		View buttonCancel = dialog.findViewById(R.id.dialog_cancel);		
		buttonCancel.setOnClickListener(new OnClickListener() {			
			public void onClick(View v) {
				// TODO Auto-generated method stub
				dialog.dismiss();
			}
		});
		
		dialog.show();
 	    dialog.setFeatureDrawableResource(Window.FEATURE_LEFT_ICON, R.drawable.icon);

	}
	
	

}
