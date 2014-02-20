package com.webkey;

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

import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.net.HttpURLConnection;
import java.net.Socket;
import java.net.URL;
import java.net.URLConnection;
import java.util.Random;

import org.apache.http.HttpEntity;
import org.apache.http.HttpResponse;
import org.apache.http.client.HttpClient;
import org.apache.http.client.methods.HttpGet;
import org.apache.http.client.methods.HttpPost;
import org.apache.http.impl.client.DefaultHttpClient;
import org.xml.sax.InputSource;

import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
//import android.database.Cursor;
import android.preference.PreferenceManager;
import android.util.Log;
//import android.util.Log;
import org.apache.http.params.HttpParams; 
import org.apache.http.params.BasicHttpParams; 
import org.apache.http.params.HttpProtocolParams;
import org.apache.http.params.HttpConnectionParams;

public class Ipc {
	final static String TAG = "Webkey_java";
	public static NotificationManager manager;
	public String port;
	public String sslport;
	public String random;
//	DataOutputStream dos;
//	HttpURLConnection conn;
	private String authKey=null;
	private String workDir;
	private Context _context;

	public Ipc(Context context){
		_context = context;
		SharedPreferences prefs = PreferenceManager.getDefaultSharedPreferences(context);
		port = prefs.getString("port", "80");
		sslport = prefs.getString("sslport", "443");
		
		random = prefs.getString("random", "");
		if (random.length() == 0)
		{
			Random rnd = new Random();
			for (int i = 0; i < 16; i++)
			{
				int c = rnd.nextInt(62);
				if (c < 10)
					random += (char)(c+48);
				else if (c < 36)
					random += (char)(c+65-10);
				else
					random += (char)(c+97-36);
			}
			SharedPreferences.Editor ed = prefs.edit();
			ed.putString("random",random);
			ed.commit();
		}
		workDir=context.getFilesDir().getPath()+"/";
		readAuthKey();
	}
	
	public String comBin_old(String url){
		InputStream is = null;
		try{
			SharedPreferences prefs = PreferenceManager.getDefaultSharedPreferences(_context);
			port = prefs.getString("port", "80");
			HttpGet httpGet = new HttpGet("http://127.0.0.1:"+port+"/"+url);
HttpParams httpParameters = new BasicHttpParams();
int timeoutConnection = 500;
HttpConnectionParams.setConnectionTimeout(httpParameters, timeoutConnection);
int timeoutSocket = 1000;
HttpConnectionParams.setSoTimeout(httpParameters, timeoutSocket);
			HttpClient httpclient = new DefaultHttpClient(httpParameters);
			HttpResponse response = httpclient.execute(httpGet);
			is = response.getEntity().getContent();
			StringBuffer b = new StringBuffer();
			int ch;
						
			while ((ch = is.read()) != -1) {
				b.append((char) ch);
			}
			String s = b.toString();
			//Log.d(TAG,s);
			return s;
		}catch(Exception e){
//			Log.d(TAG,e.toString());
			return null;
		}
	}
	
	public String comBinAuth(String url){
		InputStream is = null;
		readAuthKey();
		try{
			//Log.d(TAG,"http://127.0.0.1:"+port+"/"+authKey+url);
			SharedPreferences prefs = PreferenceManager.getDefaultSharedPreferences(_context);
			port = prefs.getString("port", "80");
			HttpGet httpGet = new HttpGet("http://127.0.0.1:"+port+"/"+authKey+url);
HttpParams httpParameters = new BasicHttpParams();
int timeoutConnection = 500;
HttpConnectionParams.setConnectionTimeout(httpParameters, timeoutConnection);
int timeoutSocket = 1000;
HttpConnectionParams.setSoTimeout(httpParameters, timeoutSocket);
			HttpClient httpclient = new DefaultHttpClient(httpParameters);
			HttpResponse response = httpclient.execute(httpGet);
			is = response.getEntity().getContent();
			StringBuffer b = new StringBuffer();
			int ch;
						
			while ((ch = is.read()) != -1) {
				b.append((char) ch);
			}
			String s = b.toString();
			if(s.equals("") || s.equals("\n"))	
				return null;
			else
				return s;			
		}catch(Exception e){
			//Log.d(TAG,e.toString());
			return null;
		}
	}
	
	public void comBinAuth(String turl, String postData){
		readAuthKey();
		try{								
			SharedPreferences prefs = PreferenceManager.getDefaultSharedPreferences(_context);
			port = prefs.getString("port", "80");
			Socket s = new Socket("127.0.0.1",Integer.parseInt(port));
		       
			//outgoing stream redirect to socket
			DataOutputStream dataOutputStream = new DataOutputStream(s.getOutputStream());
			byte[] utf = postData.getBytes("UTF-8");
			dataOutputStream.writeBytes("POST /"+authKey+turl +" HTTP/1.1\r\n"+
					"Host: 127.0.0.1\r\n"+
					"Connection: close\r\n"+
					"Content-Length: "+Integer.toString(utf.length)+"\r\n\r\n");
			dataOutputStream.write(utf,0,utf.length);
			dataOutputStream.flush();
			dataOutputStream.close();
			s.close();
		} catch (IOException e1) {
			//e1.printStackTrace();		
		}		
/*
//			Log.d(TAG,"post data");
			String target = "http://127.0.0.1:"+port+"/"+authKey+turl;
			//Log.d(TAG,target);
			URL url = new URL(target);
			URLConnection conn = url.openConnection();
			// Set connection parameters.
			conn.setDoInput (true);
			conn.setDoOutput (true);
			conn.setUseCaches (false);
			//Make server believe we are form data...
			conn.setRequestProperty("Content-Type", "application/x-www-form-urlencoded");
			DataOutputStream out = new DataOutputStream (conn.getOutputStream ());
			// Write out the bytes of the content string to the stream.
			out.writeBytes(postData);
			out.flush ();
			out.close ();
			// Read response
			BufferedReader in = new BufferedReader (new InputStreamReader(conn.getInputStream ()));
			String temp;
			String response = null;
			while ((temp = in.readLine()) != null){
			  response += temp + "\n";
			}
			  temp = null;
			  in.close ();
			  System.out.println("Server response:\n'" + response + "'");
		}catch(Exception e){
			Log.d(TAG,e.toString());
		}

*/
	}
	
	public String registerusername(String serveraddr,String uname,String versionName){
		InputStream is = null;
		try{
//			Log.d(TAG,"connecting:"+serveraddr);
			HttpGet httpGet = new HttpGet("http://"+serveraddr+"/register_"+uname+"/"+random+"/"+versionName);
HttpParams httpParameters = new BasicHttpParams();
int timeoutConnection = 500;
HttpConnectionParams.setConnectionTimeout(httpParameters, timeoutConnection);
int timeoutSocket = 1000;
HttpConnectionParams.setSoTimeout(httpParameters, timeoutSocket);
			HttpClient httpclient = new DefaultHttpClient(httpParameters);
			HttpResponse response = httpclient.execute(httpGet);
			is = response.getEntity().getContent();
			StringBuffer b = new StringBuffer();
			int ch;
						
			while ((ch = is.read()) != -1) {
				b.append((char) ch);
			}
			String s = b.toString();
			//Log.d(TAG,s);
//			Log.d(TAG,"response:"+s);
//			Log.d(TAG,"response length:"+s.length());
			return s;
		}catch(Exception e){
			//e.printStackTrace();
			return "error";
		}
	}

	public boolean runTest(){
		String testString = comBin_old("javatest");
		//return null;		
		if ("Webkey".equals(testString)){			
			return true;
		}else{
			return false;
		}
		
	}
	

	public void startService(){
		try {		
//	Log.e("Webkey", "in ipc.startService");
			String[] cmd = {"/data/data/com.webkey/files/start.sh"};		
			File file = new File("/");//data/data/com.webkey/files/");			
//	Log.e("Webkey", "before calling exec, file = "+file);
			Runtime.getRuntime().exec(cmd,null,file);
//	Log.e("Webkey", "after calling exec");
		} catch (IOException e) {
//	Log.e("Webkey", "exception1 = "+e);
			e.printStackTrace();
		}catch(Exception e){
//	Log.e("Webkey", "exception2 = "+e);
			e.printStackTrace();
		}
//	Log.e("Webkey", "done");
		readAuthKey();
	}
	
	private void readAuthKey(){
		try {
		  FileInputStream fstream = new FileInputStream(workDir+"/authkey.txt");
		  DataInputStream in = new DataInputStream(fstream);
		  BufferedReader br = new BufferedReader(new InputStreamReader(in));
		  authKey=br.readLine().replaceAll("/r","").replaceAll("/n","");
		  br.close();
		  in.close();
		  fstream.close();
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			//e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			//e.printStackTrace();
		} catch (Exception e) {
			// still not ready
		}
	}
	
	public void notiyShow(Context pContext,String message){
		SharedPreferences prefs = PreferenceManager.getDefaultSharedPreferences(pContext);
		if(!prefs.getBoolean("statusbar", true)){
			notiyDestroy(pContext);
			return;
		}
		Notification notification;		
				
//		Log.d("Webkey","START_notify");		
		if(manager==null)
			manager = (NotificationManager) pContext.getSystemService(Context.NOTIFICATION_SERVICE);
		
		notification = new Notification();		
        notification.flags |= Notification.FLAG_ONGOING_EVENT;
		notification.icon = R.drawable.icon;
		//notification.tickerText = "Service is running";		
		notification.when = System.currentTimeMillis();
		//Intent notificationIntent = new Intent();
		//PendingIntent contentIntent = PendingIntent.getActivity(pContext, 0, notificationIntent, 0);
		//notification.setLatestEventInfo(pContext, "Webkey", "NotificationContent", contentIntent);
		Intent notifyIntent = new Intent(pContext,Webkey.class);
		notification.setLatestEventInfo(pContext, "Webkey", message, PendingIntent.getActivity(pContext, 0, notifyIntent, 0));
		manager.notify(1, notification);
	}
		
	public void notifyUpdate(Context pContext){
		SharedPreferences prefs = PreferenceManager.getDefaultSharedPreferences(pContext);
		if(prefs.getBoolean("statusbar", false))
			notiyShow(pContext,"");
		else
			notiyDestroy(pContext);
	}
	
	public void notiyDestroy(Context pContext){
		if(manager==null)
			manager = (NotificationManager) pContext.getSystemService(Context.NOTIFICATION_SERVICE);
		try{
			manager.cancel(1);				
		}catch(Exception e){}
	}

	public void sendMessage(String message){
		readAuthKey();
		try{

		SharedPreferences prefs = PreferenceManager.getDefaultSharedPreferences(_context);
		port = prefs.getString("port", "80");
	        Socket s = new Socket("127.0.0.1",Integer.parseInt(port));
	       
	        //outgoing stream redirect to socket
		DataOutputStream dataOutputStream = new DataOutputStream(s.getOutputStream());
		byte[] utf = message.getBytes("UTF-8");
		dataOutputStream.writeBytes("POST /"+authKey+"phonewritechatmessage HTTP/1.1\r\n"+
				"Host: 127.0.0.1\r\n"+
				"Connection: close\r\n"+
				"Content-Length: "+Integer.toString(utf.length)+"\r\n\r\n");
		dataOutputStream.write(utf,0,utf.length);
		dataOutputStream.flush();
		dataOutputStream.close();
	        s.close();
		} catch (IOException e1) {
			//e1.printStackTrace();		
		}		
		
	}
	public InputSource getMessages(String ID) {
		// TODO Auto-generated method stub
		//return "<chat><message><index>1<index></message></chat>";
		readAuthKey();
		try {
//			Log.d("Webkey_java: ","get "+"http://127.0.0.1:"+port+"/"+authKey+"phonegetchatmessage_"+ID);
			SharedPreferences prefs = PreferenceManager.getDefaultSharedPreferences(_context);
			port = prefs.getString("port", "80");
			URL url = new URL("http://127.0.0.1:"+port+"/"+authKey+"phonegetchatmessage_"+ID);
			//HttpGet httpGet = new HttpGet("http://127.0.0.1:"+port+"/"+url);
			return new InputSource(url.openStream());
		} catch (Exception e) {
//			Log.d("Webkey_java: ",e.toString());
			return null;
		}	
	}

	public void kill() {
		String pid = null;
//		Log.d(TAG,"trying to kill Webkey's service");
		try {
		  FileInputStream fstream = new FileInputStream(workDir+"/pid.txt");
		  DataInputStream in = new DataInputStream(fstream);
		  BufferedReader br = new BufferedReader(new InputStreamReader(in));
		  pid=br.readLine();
		  br.close();
		  in.close();
		  fstream.close();
		} catch (FileNotFoundException e) {
			e.printStackTrace();		
			return;
		} catch (IOException e) {
			e.printStackTrace();		
			return;
		}
//		Log.d(TAG,"pid: "+pid);
		try {
			String cmd = "kill -9 " + pid;
			Process p = Runtime.getRuntime().exec(cmd);
			p.waitFor();
//			Log.d(TAG,"killed the service");
			return;

		} catch (IOException e) {
			e.printStackTrace();		
		} catch (InterruptedException e) {
			e.printStackTrace();		
		}
		for (String pre : new String[]{"/system/bin/","/system/xbin/","/system/xbin/bb/","/system/sbin/"})
		{
			try {
				String[] cmd = { pre+"kill", "-9", pid };
				File location = new File(pre);
				Process p = Runtime.getRuntime().exec(cmd, null, location);
				p.waitFor();
//				Log.d(TAG,"killed the service");
				return;

			} catch (IOException e) {
			e.printStackTrace();		
			} catch (InterruptedException e) {
			e.printStackTrace();		
			}
		}
	}
}
