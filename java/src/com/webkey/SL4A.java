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

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.util.Log;


public class SL4A extends BroadcastReceiver{
	@Override
	public void onReceive(Context context, Intent intent) {
		String action = intent.getAction();
		if ("webkey.intent.action.SL4A.START".equalsIgnoreCase(action)){
//			ScriptApplication application = new ScriptApplication();
//			if (application.readyToStart())
//			{
				context.stopService(new Intent(context, ScriptService.class));
				context.startService(new Intent(context, ScriptService.class));
		        Log.i("SL4A", "service started");
//			}
		}
	}

}
