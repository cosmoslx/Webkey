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
import java.io.IOException;

import android.app.PendingIntent;
import android.appwidget.AppWidgetManager;
import android.appwidget.AppWidgetProvider;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.util.Log;
import android.widget.RemoteViews;

public class Widget extends AppWidgetProvider{
	public static RemoteViews remoteViews;
	public String ACTION_WIDGET_RECEIVER ="ActionReceiverWidget";
    static final ComponentName THIS_APPWIDGET = new ComponentName("com.webkey","com.webkey.Widget");
	public static Ipc ipc=null;
	public static int runState = 0;
	//0 = stopped
	//1 = stopped
	//2 = wait, state changing
	//3 = state should refresh 
	
	@Override
	public void onUpdate(Context context, AppWidgetManager appWidgetManager,int[] appWidgetIds) {        
	    
		remoteViews = new RemoteViews(context.getPackageName(), R.layout.widget);				

        Intent intent = new Intent(context, Widget.class); 
        intent.setAction(ACTION_WIDGET_RECEIVER);
        PendingIntent pendingIntent = PendingIntent.getBroadcast(context, 0, intent, 0);
        remoteViews.setOnClickPendingIntent(R.id.img, pendingIntent);
        
        if(runState != 2){
        	if(ipc==null)
        		ipc=new Ipc(context);
        	
        	if(ipc.runTest()){
        		if(runState!=1){
        			remoteViews.setImageViewResource(R.id.img, R.drawable.icon);
        			runState=1;
        			ipc.notiyShow(context,"Running");
        			
        		}
        	}else{
        		if(runState!=0){
        			remoteViews.setImageViewResource(R.id.img, R.drawable.icon_gray);
        			runState=0;
                    ipc.notiyDestroy(context);		            		            
        		}
        	}
        	appWidgetManager.updateAppWidget(appWidgetIds, remoteViews);
        }
//        Log.d("WEBKEY_JAVA_WIDGET:","UPDATE");
        
	}
	
	@Override
	public void onReceive(Context context, Intent intent) {
		// v1.5 fix that doesn't call onDelete Action
		//super.onReceive(context, intent);
		if(ipc==null)
			ipc=new Ipc(context);
    	
		final String action = intent.getAction();
		if (AppWidgetManager.ACTION_APPWIDGET_DELETED.equals(action)) {
			/*
			final int appWidgetId = intent.getExtras().getInt(
					AppWidgetManager.EXTRA_APPWIDGET_ID,
					AppWidgetManager.INVALID_APPWIDGET_ID);
			if (appWidgetId != AppWidgetManager.INVALID_APPWIDGET_ID) {
				this.onDeleted(context, new int[] { appWidgetId });
			}
			*/
		}else if(intent.getAction().equals(ACTION_WIDGET_RECEIVER) && runState!=2) {
	        if(ipc.runTest()){
	        	ipc.comBinAuth("stop");	    
	        }else{
	        	startservice();
	        }
	        
		if (remoteViews == null)
			remoteViews = new RemoteViews(context.getPackageName(), R.layout.widget);				
        	remoteViews.setImageViewResource(R.id.img, R.drawable.icon_c);
        	runState=2;	        
	        final AppWidgetManager gm = AppWidgetManager.getInstance(context);
	        gm.updateAppWidget(THIS_APPWIDGET, remoteViews);
	        new StateTimer(context).start();
		}
		super.onReceive(context, intent);
	}
	
	@Override
	public void onEnabled(Context context){
		if(ipc==null)
    		ipc=new Ipc(context);
    	
		remoteViews = new RemoteViews(context.getPackageName(), R.layout.widget);				
	       ipc = new Ipc(context);
	        if(ipc.runTest()){	        
	        	runState=0;
	        }else{
	        	runState=1;
	        }
	}
	
	void startservice(){
		ipc.startService();
	}
	

class StateTimer extends Thread {
	Context tContext;
	public StateTimer(Context context) {
		tContext = context;
		// TODO Auto-generated constructor stub
	}

	public void run() {
		try {
			Thread.sleep(5000);			
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		if(Widget.runState==2)
			Widget.runState=3;
		if(Widget.ipc.runTest()){
			Widget.remoteViews.setImageViewResource(R.id.img, R.drawable.icon);
			ipc.notiyShow(tContext,"Running");
		}else{
			Widget.remoteViews.setImageViewResource(R.id.img, R.drawable.icon_gray);
            ipc.notiyDestroy(tContext);		            		            

			
		}
        AppWidgetManager gm = AppWidgetManager.getInstance(tContext);
        gm.updateAppWidget(THIS_APPWIDGET, Widget.remoteViews);
	} 
} 

}
