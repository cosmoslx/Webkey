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
import android.location.Location;
import android.location.LocationListener;
import android.location.LocationManager;
import android.os.Bundle;
import android.text.format.Time;
import android.util.Log;
import java.lang.Math;
import com.webkey.Ipc;

public class GPS extends BroadcastReceiver{
	private LocationManager locationManager;
	private Location location;
	static private mylocationlistener llGPS;
	static private mylocationlistener llnetwork;
	static private boolean started=false;
	public static Ipc ipc;
	@Override
	public void onReceive(Context context, Intent intent) {
			
		String action = intent.getAction();
		String intentResult = null;
		locationManager = (LocationManager) context.getSystemService(Context.LOCATION_SERVICE);
		if ("webkey.intent.action.GPS.STOP".equalsIgnoreCase(action)){
//			Log.d("webkey","stop gps");
//			if (started)
//			{
				try{
					locationManager.removeUpdates(llGPS);
					locationManager.removeUpdates(llnetwork);
					llGPS = null;
					llnetwork = null;
//					Log.d("webkey","all ok with stop");
				}catch(Exception e){}
				started = false;
//			}
			return;
		}    
		
		if (started == false)
		{
			ipc = new Ipc(context);
			llGPS = new mylocationlistener();
			Time newt;
			newt =  new Time();
			newt.setToNow();
			String s = newt.toString(); 
//			Log.d("webkey","start"+s);
			try{
				locationManager.requestLocationUpdates(LocationManager.GPS_PROVIDER, 0, 0, llGPS);
				mylocationlistener llnetwork = new mylocationlistener();
				locationManager.requestLocationUpdates(LocationManager.NETWORK_PROVIDER, 0, 0, llnetwork);
				started = true;
//				Log.d("webkey","all ok with start");
			}
			catch(Exception e){};
		}
		
		/*
		GpsStatus status = null;
		
		locationManager.getGpsStatus(status);
		//Log.d("Webkey",status.toString());
		*/
	    //locationManager.requestLocationUpdates(LocationManager.NETWORK_PROVIDER, 1000, 10, ll);
//		Log.d("webkey","get GPS coordinates");
		long unixTime = System.currentTimeMillis() / 1000L;
		long lUnixTime;
		
			intentResult="";
			location = locationManager.getLastKnownLocation(LocationManager.NETWORK_PROVIDER);
			if (location == null){
//				Log.d("webkey","network location == null");
			}else{
				lUnixTime =unixTime-(location.getTime()/1000);
				intentResult+= "_nlat_"+Math.round(location.getLatitude()*10000000L)/10000000.0+"_nlong_"+Math.round(location.getLongitude()*10000000L)/10000000.0+"_nmtime_"+lUnixTime+"_naccu_";
				if (location.getAccuracy() == 0.0)
					intentResult += '-';
				else
					intentResult += (int)(location.getAccuracy())+"&nbsp;m";
			}
			
	    
//			Log.d("webkey","network location == "+intentResult);
	   	    
			location = locationManager.getLastKnownLocation(LocationManager.GPS_PROVIDER);
			if (location == null){
				//Log.d("Webkey","Last known GPS: [unknown]");
//				Log.d("webkey","gps location == null");
			}else{
				lUnixTime =unixTime-(location.getTime()/1000);
				//Log.d("Webkey","Last known GPS; lat:"+location.getLatitude() + " long" + location.getLongitude()+" time:"+lUnixTime);        	
				intentResult+="_glat_"+Math.round(location.getLatitude()*10000000L)/10000000.0+"_glong_"+Math.round(location.getLongitude()*10000000.0)/10000000.0+"_gmtime_"+lUnixTime+"_gaccu_";
				if (location.getAccuracy() == 0.0)
					intentResult += '-';
				else
					intentResult += (int)(location.getAccuracy())+"&nbsp;m";
				//Log.d("Webkey",location.toString());
			}
			
			//setResultData(intentResult);
//			Log.d("webkey","gps location == "+intentResult);
			ipc.comBinAuth("gpsset"+intentResult);
	}


    private class mylocationlistener implements LocationListener {

		public void onLocationChanged(Location location) {
			// TODO Auto-generated method stub

		}

		public void onProviderDisabled(String provider) {
			// TODO Auto-generated method stub
//			Log.d("webkey","destructor");
			
		}

		public void onProviderEnabled(String provider) {
			// TODO Auto-generated method stub
//			Log.d("webkey","providerenabled");
			
		}

		public void onStatusChanged(String provider, int status, Bundle extras) {
			// TODO Auto-generated method stub
//			Log.d("webkey","statuschanged");
			
		}

        }	

}
