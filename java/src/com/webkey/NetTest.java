package com.webkey;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.DataInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.UUID;

import org.apache.http.HttpResponse;
import org.apache.http.client.ClientProtocolException;
import org.apache.http.client.methods.HttpGet;
import org.apache.http.impl.client.DefaultHttpClient;
import org.apache.http.params.BasicHttpParams;
import org.apache.http.params.HttpConnectionParams;
import org.apache.http.params.HttpParams;
import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.PowerManager;
//import android.util.Log;


public class NetTest extends BroadcastReceiver{
//	UUID.randomUUID();
	Context context;		
	String versionString="2.09";

	@Override
	public void onReceive(Context context, Intent intent) {	

		try{			
			versionString = context.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionName;
			//Log.d("Webkey_java: ","version_code: "+versionString);
		}catch(Exception e){}
    	this.context=context;
    	new BGNetTest().start();    	
		
    }
	
	class BGNetTest extends Thread{
		String myUUIDFile;
		String myUUID = null;
		
		@Override
		public void run(){
		    
	    	PowerManager pm = (PowerManager) context.getSystemService(Context.POWER_SERVICE);
	    	PowerManager.WakeLock wl = pm.newWakeLock(PowerManager.PARTIAL_WAKE_LOCK, "Webkey");
	    	wl.acquire();

			String dir = context.getFilesDir().getPath();
			myUUIDFile = dir+"/uuid.txt";
			
			if(new File(myUUIDFile).exists()){
				myUUID=readUUID(myUUIDFile);
			}
			
			if(myUUID==null){
				myUUID = UUID.randomUUID().toString();
				writeContent(myUUIDFile, myUUID);
			}
			
			if(checkTheNetworkAvailability()){
				try {
					//String response = pingServer(myUUID);
					pingServer(myUUID);
//					writeContent(dir+"/nettest.txt", response);
					disableNetTest();
				} catch (ClientProtocolException e) {
					// TODO Auto-generated catch block
					enableNetTest();
				} catch (IOException e) {
					//TODO Auto-generated catch block
					enableNetTest();
				}
			}else{
				enableNetTest();
			}
//			disableNetTest();
			
			wl.release();
		}
			    
	    private void pingServer(String myUUID) throws ClientProtocolException, IOException {
	    	//Long time = SystemClock.uptimeMillis();
	    HttpParams httpParameters = new BasicHttpParams();
	    HttpConnectionParams.setConnectionTimeout(httpParameters, 7000);
	    HttpConnectionParams.setSoTimeout(httpParameters, 8000);

	    DefaultHttpClient httpclient = new DefaultHttpClient(httpParameters);	    
			HttpGet httpGet = new HttpGet("http://webkey.cc/nettest_"+this.myUUID+"_"+versionString);
			try{
			HttpResponse response = httpclient.execute(httpGet);
			} catch(Exception e){};
/*			InputStream is = response.getEntity().getContent();
			StringBuffer b = new StringBuffer();
			int ch;					
			while ((ch = is.read()) != -1) {
				b.append((char) ch);
			}
*/
			//String s = b.toString();
//			String s;
//			time = SystemClock.uptimeMillis()-time;
//			s=time.toString();
//			return s;
		}
	
		private void writeContent(String file, String content){
	    	try{ 
	    		FileWriter fstream = new FileWriter(file);
	    		BufferedWriter out = new BufferedWriter(fstream);
	    		out.write(content);    		
	    		out.close();
	    	}catch (Exception e){}
	    		  
	    }
	    
	    private String readUUID(String file){
	    	FileInputStream fstream;
			try {
				fstream = new FileInputStream(file);
				DataInputStream in = new DataInputStream(fstream);
				BufferedReader br = new BufferedReader(new InputStreamReader(in));
				String strLine = br.readLine();
				fstream.close();
				return strLine;
			} catch (FileNotFoundException e) {
				return null;
			} catch (IOException e) {
				return null;
			}    	 
	    	
	    }
	    
	    private void disableNetTest(){
			ComponentName component=new ComponentName(context, NetTest.class);
	
			context.getPackageManager()
			    .setComponentEnabledSetting(component, PackageManager.COMPONENT_ENABLED_STATE_DISABLED,
			                                PackageManager.DONT_KILL_APP);
	    }
	    
	    private void enableNetTest(){
			ComponentName component=new ComponentName(context, NetTest.class);
	
			context.getPackageManager()
			    .setComponentEnabledSetting(component, PackageManager.COMPONENT_ENABLED_STATE_ENABLED,
			                                PackageManager.DONT_KILL_APP);
	    	
	    }
	    
	    
	    public boolean checkTheNetworkAvailability() {
	    	 ConnectivityManager connectivityManager = (ConnectivityManager)
	    	 	context.getSystemService(Context.CONNECTIVITY_SERVICE);
	    	 if (connectivityManager != null) {
	    		 NetworkInfo[] myinfo = connectivityManager.getAllNetworkInfo();
	    		 if (myinfo != null)
	    			 for (int i = 0; i < myinfo.length; i++)
	    				 if (myinfo[i].getState() == NetworkInfo.State.CONNECTED)
					 {
	    					 return true;
					 }
	    	 }
	    	 return false;
	    }
	    	
	    /*
	    NetworkInfo info = (NetworkInfo) ((ConnectivityManager) context.getSystemService(Context.CONNECTIVITY_SERVICE)).getActiveNetworkInfo();
	
	    if (info == null || !info.isConnected()) {
	        return false;
	    }
	    if (info.isRoaming()) {
	        // here is the roaming option you can change it if you want to
	        // disable internet while roaming, just return false
	        return false;
	    }
	    return true;
	     */
	}
}
