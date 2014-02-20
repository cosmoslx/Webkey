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

import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;

public class ChatReceiver extends BroadcastReceiver {

	@Override
	public void onReceive(Context context, Intent intent) {
		// TODO Auto-generated method stub
		//Log.d("WEBKEY_Java","chat receiver started");
		Notification notification;
		NotificationManager manager = (NotificationManager) context.getSystemService(Context.NOTIFICATION_SERVICE);
        
		notification = new Notification();
		notification.icon = R.drawable.chat;
		notification.tickerText = "New chat message";				
		notification.when = System.currentTimeMillis();
		notification.flags |= Notification.FLAG_SHOW_LIGHTS;
		notification.defaults |= Notification.DEFAULT_SOUND;
		notification.defaults |= Notification.DEFAULT_LIGHTS;
		//notification.defaults |= Notification.DEFAULT_VIBRATE;
		
		Intent notifyIntent = new Intent(context,Webkey.class);
		notifyIntent.setFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
		notifyIntent.setAction("chat");	
		notification.setLatestEventInfo(context, "Webkey", "New message", PendingIntent.getActivity(context, 0, notifyIntent, 0));
		
		manager.notify(1, notification);
		
	}
}
