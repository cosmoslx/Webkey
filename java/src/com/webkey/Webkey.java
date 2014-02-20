package com.webkey;

import com.webkey.R;

import android.app.TabActivity;
import android.content.Intent;
import android.content.res.Resources;
import android.os.Bundle;
import android.util.Log;
import android.widget.TabHost;


public class Webkey extends TabActivity {
	TabHost tabHost;
	
	@Override
	protected void onSaveInstanceState(Bundle outState) {
		    //No call for super(). Bug on API Level > 11.
	}
    /** Called when the activity is first created. */
	public void onCreate(Bundle savedInstanceState) {
	    super.onCreate(savedInstanceState);
	    setContentView(R.layout.main);

	    Resources res = getResources(); // Resource object to get Drawables
	    tabHost = getTabHost();  // The activity TabHost
	    TabHost.TabSpec spec;  // Resusable TabSpec for each tab
	    Intent intent;  // Reusable Intent for each tab

	    
	    // Create an Intent to launch an Activity for the tab (to be reused)
	    intent = new Intent().setClass(this, com.webkey.activity.WebkeyTab.class);
	    spec = tabHost.newTabSpec("control").setIndicator("Control",
	                      res.getDrawable(R.drawable.ic_tab_control))
	                  .setContent(intent);
	    tabHost.addTab(spec);
	    
	    intent = new Intent().setClass(this, com.webkey.activity.SettingsTab.class);
	    spec = tabHost.newTabSpec("settings").setIndicator("Settings",
	                      res.getDrawable(R.drawable.ic_tab_settings))
	                  .setContent(intent);
	    tabHost.addTab(spec);
	    

	    intent = new Intent().setClass(this, com.webkey.activity.ChatUI.class);
	    spec = tabHost.newTabSpec("chat").setIndicator("Chat",
	                      res.getDrawable(R.drawable.ic_tab_chat))
	                  .setContent(intent);
	    tabHost.addTab(spec);

            intent = new Intent().setClass(this, com.webkey.remotescreen.RemoteScreenActivity.class);
            spec = tabHost.newTabSpec("remotescreen").setIndicator("RemoteScreen",res.getDrawable(R.drawable.ic_tab_remote))
                                .setContent(intent);
            tabHost.addTab(spec);

	    tabHost.setCurrentTab(0);
	}
	
	@Override
	public void onResume(){		
		super.onResume();
		String isChatMsg=null;
//        Log.d("Webkey_java: ","onresume");
        Intent intent = getIntent();
        isChatMsg = intent.getAction();
        if(isChatMsg != null && isChatMsg.equals("chat")){
//        	Log.d("Webkey_java | webkey: ","received intent tab parameter: "+isChatMsg);
        	tabHost.setCurrentTab(2);
        }
	}		
}
