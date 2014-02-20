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

import java.io.BufferedInputStream;
import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.IOException;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.DialogInterface;
import android.content.DialogInterface.OnClickListener;
import android.os.Bundle;
import android.widget.TextView;

public class LogView extends Activity{
	TextView logText;
	@Override
	public void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);	
		setContentView(R.layout.logview);
		logText = (TextView) findViewById(R.id.logcontent);
	}
	
	@Override
	public void onResume(){
		super.onResume();
		//File logFile = new File("log.txt");;
        try {
            FileInputStream fis = new FileInputStream(this.getFilesDir().getPath()+"/log.txt");
            BufferedInputStream bis = new BufferedInputStream(fis);
            DataInputStream dis = new DataInputStream(bis);
            String line=null;
            while ((line=dis.readLine())!=null) {            
            	logText.append(line+"\n");
            }
            fis.close();
        } catch (IOException e) {
        	showDialog(getString(R.string.logview_nologmsg),getString(R.string.warning));
        } catch (OutOfMemoryError e){
        	showDialog(getString(R.string.logview_toobigfile),getString(R.string.warning));
        }

	}
	
	private void showDialog(String message, String title) {
		AlertDialog.Builder alert = new AlertDialog.Builder(this);			
		alert.setNeutralButton("ok", new OnClickListener() {
			public void onClick(DialogInterface dialog, int which) {
				// TODO Auto-generated method stub
				finish();				
			}
		}) ;		
		alert.setIcon(R.drawable.icon);
		alert.setTitle(title);
		alert.setMessage(message);		
		alert.show();
	}

}
