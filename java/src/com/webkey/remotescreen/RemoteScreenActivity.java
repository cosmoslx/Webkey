package com.webkey.remotescreen;

import com.webkey.R;

import android.app.Activity;
import android.app.ActivityManager;
import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.pm.ConfigurationInfo;
import android.os.Bundle;
import android.preference.PreferenceManager;
import android.util.Log;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.view.View.OnClickListener;
import android.widget.EditText;
import android.widget.RadioButton;

public class RemoteScreenActivity extends Activity implements OnClickListener{
	
	Context context;
	SharedPreferences prefs;
	
	@Override
	protected void onSaveInstanceState(Bundle outState) {
		    //No call for super(). Bug on API Level > 11.
	}
     @Override
    public void onCreate(Bundle savedInstanceState) {            	
        super.onCreate(savedInstanceState);
        context = getApplicationContext();
        this.requestWindowFeature(Window.FEATURE_NO_TITLE);
        this.getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
        		WindowManager.LayoutParams.FLAG_FULLSCREEN);
        setContentView(R.layout.remotescreen_main);
        findViewById(R.id.dialog_connect).setOnClickListener(this);
        
        prefs = PreferenceManager.getDefaultSharedPreferences(this);
        
        EditText dialogUsername = (EditText) findViewById(R.id.edit_username);
        dialogUsername.setText(prefs.getString("rscreenusername", ""));        
        
        if(prefs.getBoolean("rscreenproxy", true)){
        	RadioButton proxyButton = (RadioButton)findViewById(R.id.proxyyes);
        	proxyButton.setChecked(true);
        	proxyButton = (RadioButton)findViewById(R.id.proxyno);
        	proxyButton.setChecked(false);
        }else{
        	RadioButton proxyButton = (RadioButton)findViewById(R.id.proxyyes);
        	proxyButton.setChecked(false);
        	proxyButton = (RadioButton)findViewById(R.id.proxyno);
        	proxyButton.setChecked(true);
        }
        
        EditText proxy = (EditText) findViewById(R.id.edit_phone_address);
    	proxy.setText(prefs.getString("rscreenaddress", ""));
        
        
        ActivityManager am = (ActivityManager) getSystemService(Context.ACTIVITY_SERVICE);
        ConfigurationInfo info = am.getDeviceConfigurationInfo();
        
        if ( info.reqGlEsVersion <= 0x00010001){
        	showDialog(getString(R.string.remotescreen_text_glnotsupported),getString(R.string.warning));
//            Log.e("Webkey_java | opengl: ","opengl version is to low: "+info.reqGlEsVersion);
        }        
	}
     
    @Override
    protected void onPause() {
    	super.onPause();
    }
    
    @Override
    protected void onResume() {
    	super.onResume();
    }
            
	public void onClick(View v) {
		switch (v.getId()) {        
    	case R.id.dialog_connect:
    		boolean proxy;
	    	
    		EditText dialogUsername = (EditText) findViewById(R.id.edit_username);
    		EditText dialogPassword = (EditText) findViewById(R.id.edit_passwd);
    		EditText dialogAddress = (EditText) findViewById(R.id.edit_phone_address);
    		RadioButton proxyButton = (RadioButton)findViewById(R.id.proxyyes);
    		
	    	String passwd = dialogPassword.getText().toString();
	    	String username = dialogUsername.getText().toString();
	    	String address = dialogAddress.getText().toString();	    	
	    	
	    	proxy = proxyButton.isChecked()? true : false;
	    	
	    	
	    	SharedPreferences.Editor ed = prefs.edit();
	    	
	    	if(!address.equals("")){
	    		ed.putBoolean("rscreenproxy", proxy);
	    		ed.putString("rscreenaddress", address);
	    		ed.putString("rscreenusername", username);
	    	}else{
	    		//nem valid az urlap.
	    		return;
	    	}
	    		    	
            ed.commit();
	    	startRemoteScreenUtil(username, passwd, address, proxy);
	    	break;

		}
	}
	
	public void startRemoteScreenUtil(String uName, String passwd, String address, boolean proxy){
		Intent intent = new Intent(context,RemoteScreenUtil.class);
		String data[] = {uName, passwd, address};	
		intent.putExtra("data", data);
		intent.putExtra("proxy",proxy);
        intent.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
        startActivity(intent);
	}
	
    private void showDialog(String message, String title) {
		AlertDialog.Builder alert = new AlertDialog.Builder(this);
	    alert.setNeutralButton("ok", new DialogInterface.OnClickListener() {	    	
	    	 public void onClick(DialogInterface dialog, int whichButton) {	    		 
	    	 }
	     });
		alert.setIcon(R.drawable.icon);
		alert.setTitle(title);
		alert.setMessage(message);		
		alert.show();
	}

}
    
