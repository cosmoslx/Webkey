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
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStreamReader;

import android.content.BroadcastReceiver;
import android.content.ContentValues;
import android.content.Context;
import android.content.Intent;
//import android.content.IntentFilter;
import android.net.Uri;
import com.webkey.Ipc;


public class SMS extends BroadcastReceiver{
	public static Context mContext;
//	public int valami=0;
	Ipc ipc;

	@Override	
	public void onReceive(Context context, Intent intent) {
		
		mContext = context;
		ipc = new Ipc(mContext);
		String numbers = "";
		String message = "";
		FileInputStream content;
		String file=context.getFilesDir().getPath()+"/smsqueue";
		try {
			content = new FileInputStream(file);
			InputStreamReader input = new InputStreamReader(content);
			BufferedReader buffreader = new BufferedReader(input);
			
			String line = buffreader.readLine();
			numbers = line;

			message = buffreader.readLine();
			while (( line = buffreader.readLine()) != null) {
				message=message.concat("\n");
				message=message.concat(line);
			}
//			Log.d("WEBKEY_JAVA",numbers);
//			Log.d("WEBKEY_JAVA",message);

			String[] nums = numbers.split(",");
			for (int i = 0; i < nums.length; i++)
				writeSMS(nums[i], message);
			if (nums.length > 0)
			{
				ipc.comBinAuth("sendbroadcast");				
//				Intent i = new Intent();
//			    i.setAction("android.intent.action.BOOT_COMPLETED");
//			    ComponentName cn = ComponentName.unflattenFromString("com.android.mms/.transaction.SmsReceiver");
//			    i.setComponent(cn);
//			    mContext.sendBroadcast(i);
			}
			File dFile = new File(file);
			dFile.delete();

		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}	
	
    
    public void writeSMS(String num, String mess){
        ContentValues values = new ContentValues();
        values.put("address", num);
        values.put("body",  mess);
        values.put("status",64);
        values.put("read",Integer.valueOf(1));
        mContext.getContentResolver().insert(Uri.parse("content://sms/queued"), values);
//        try{
//        	ipc.comBin("sendbroadcast");
//        }finally{};
//        mContext.sendBroadcast(new Intent("com.android.mms.transaction.MESSAGE_SENT",null,mContext,null));
    }

 }
