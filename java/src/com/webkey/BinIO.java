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
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.res.AssetManager;
import android.content.res.Resources;
import android.sax.StartElementListener;
import android.util.Log;


public class BinIO {
	final String TAG = "Webkey_java";
	String dir;
	Context lContext;
	AssetManager assetManager;

	public BinIO(Context mContext) {
		lContext = mContext;
		Resources resources = lContext.getResources();
		assetManager = resources.getAssets();
		dir=mContext.getFilesDir().getPath()+"/";		
		
	}
	
	public boolean openAssets(String path, String dirName, String targetPath){
		if(!dirName.equals("")){
			path=path+"/"+dirName;
		}
		targetPath = targetPath.concat("/").concat(dirName);
		String[] assets = null;
		try {
			assets = assetManager.list(path);
		} catch (IOException e1) {	}
		
		for (int i = 0; i < assets.length; i++) {
			if(assets[i].equals("spec_keys.txt") || assets[i].equals("fast_keys.txt") || assets[i].equals("notify.txt")){
				File f = new File(targetPath+assets[i]);
				if (f.exists())
					continue;
			}
			try {
					InputStream inputStream = assetManager.open(path.concat("/").concat(assets[i]));
					int r;
					for (r=0; r<20;r++)
					{
						if (unpack(path, assets[i], inputStream, targetPath))
							break;
	   					try{
	   						Thread.sleep(500);
	   					}catch(InterruptedException e){ };
					}
					if (r==20){
						Log.d("Webkey_java", "unpack errpr: - "+assets[i]);
						return false;
					}
				} catch (IOException e) {					
					if (!openAssets(path, assets[i], targetPath))
						return false;					
				}
			
		}
		return true;
	}
	
	public boolean unpackSingleFile(String path, String file, String targetPath){
		try{
			InputStream inputStream = assetManager.open(path+"/"+file);
			int r;
			for (r=0; r<20;r++)
			{
				if (unpack(path, file, inputStream, targetPath))
					break;
				try{
					Thread.sleep(500);
				}catch(InterruptedException e){ };
			}
			if (r==20)
			{
				Log.d(TAG,"unable to unpack "+file);
				return false;
			}
			return true;
		}catch(Exception e){
			Log.d(TAG,"unable to unpack "+file);
			return false;
		}
	}
	
    private boolean unpack(String path, String filename, InputStream is, String targetPath){
        (new File(targetPath)).mkdirs();

		try {
			FileOutputStream fOut;
			fOut = new FileOutputStream(new File(targetPath.concat("/").concat(filename)));
	        int read = 0;
	        byte[] bytes = new byte[16384];
	        while ((read = is.read(bytes)) != -1)
	                fOut.write(bytes, 0, read);	        
	        fOut.flush();
	        fOut.close();
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			//e.printStackTrace();
			if (path == "")
			{
				try {
					InputStream inputStream = null;
					inputStream = assetManager.open(filename);
					FileOutputStream fOut;
					fOut = lContext.openFileOutput(filename, 0);
					DataOutputStream osw = new DataOutputStream(fOut);

					int c;
			        byte[] bytes = new byte[16384];
					while (true) {
						c = inputStream.read(bytes);
						if (c <= 0)
							break;
						osw.write(bytes,0,c);

					}
					osw.flush();
					osw.close();
				} catch (IOException ee) {
//					e.printStackTrace();
					Log.d(TAG,"unable to unpack "+filename);
					return false;
				}
				return true;
			}
			return false;
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			return false;
		}
		return true;
    }
    
	public boolean delDir(File path) {
	    if(path.exists()){
	        File[] files = path.listFiles();
		if (files != null)
		{
			for(int i=0; i<files.length; i++) {
				if(files[i].isDirectory())
					delDir(files[i]);	           
				else
					files[i].delete();
			}
		}
	    }
	    return(path.delete());
	}		

	public int getCurrentVersionCode() {
	
		try {
			PackageManager manager = lContext.getPackageManager();
			PackageInfo info = manager.getPackageInfo(lContext.getPackageName(),0);
			return info.versionCode;
		} catch (Exception e) {
			return -1;
		}
	}

	public String getCurrentVersionName() {
		
		try {
			PackageManager manager = lContext.getPackageManager();
			PackageInfo info = manager.getPackageInfo(lContext.getPackageName(),0);
			return info.versionName;
		} catch (Exception e) {
			return "";
		}
	}
	
	public int oldVersion() {
		String oldVer = null;
		File f = new File(dir+"version.txt");
		if (!f.exists()) {
			return -1;
		} else {
			try {
				FileInputStream fStream = new FileInputStream(f);
				BufferedReader in = new BufferedReader(new InputStreamReader(
						fStream));
				oldVer = in.readLine();
				return Integer.parseInt(oldVer);
			} catch (Exception e) {
				return -1;
			}
		}
	}

	public void versionWrite(int version) {
		String sVerzio = Integer.toString(version);
		DataOutputStream osw = null;
		FileOutputStream fOut = null;
		try {
			fOut = lContext.openFileOutput("version.txt", 0);
			osw = new DataOutputStream(fOut);
			osw.writeBytes(sVerzio);
			osw.close();
		} catch (IOException e) {

		}

	}

	public boolean chmod775(String file) {
		// Log.e(TAG,"chmod\n");

		Log.d(TAG,"trying chmod");
		try {
			String cmd = "chmod 775 " + dir + file;
//			File location = new File("/system/bin/");
			Process p = Runtime.getRuntime().exec(cmd);
			p.waitFor();
			Log.d(TAG,"success");
			return true;

		} catch (IOException ioe) {
//			ioe.printStackTrace();
			Log.d(TAG,"failed");
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
//			e.printStackTrace();
			Log.d(TAG,"failed");
		}
		
		Log.d(TAG,"trying /system/bin/chmod");
		try {
			String[] cmd = { "/system/bin/chmod", "775",
					dir + file };
			File location = new File("/system/bin/");
			Process p = Runtime.getRuntime().exec(cmd, null, location);
			p.waitFor();
			Log.d(TAG,"success");
			return true;

		} catch (IOException ioe) {
//			ioe.printStackTrace();
			Log.d(TAG,"failed");
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
//			e.printStackTrace();
			Log.d(TAG,"failed");
		}

		
		Log.d(TAG,"trying /system/xbin/chmod");		
		try {
			String[] cmd = { "/system/xbin/chmod", "775",
					dir + file };
			File location = new File("/system/xbin/");
			Process p = Runtime.getRuntime().exec(cmd, null, location);
			p.waitFor();
			Log.d(TAG,"success");
			return true;

		} catch (IOException ioe) {
//			ioe.printStackTrace();
			Log.d(TAG,"failed");
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
//			e.printStackTrace();
			Log.d(TAG,"failed");
		}
		

		Log.d(TAG,"trying /system/xbin/bb/chmod");		
		try {
			String[] cmd = { "/system/xbin/bb/chmod", "775",
					dir + file };
			File location = new File("/system/xbin/bb");
			Process p = Runtime.getRuntime().exec(cmd, null, location);
			p.waitFor();
			Log.d(TAG,"success");
			return true;
			
		} catch (IOException ioe) {
//			ioe.printStackTrace();
			Log.d(TAG,"failed");
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
//			e.printStackTrace();
			Log.d(TAG,"failed");
		}

		Log.d(TAG,"trying /system/xbin/busybox chmod");		
		try {
			String[] cmd = { "/system/xbin/busybox", "chmod", "775",
					dir + file };
			File location = new File("/system/xbin");
			Process p = Runtime.getRuntime().exec(cmd, null, location);
			p.waitFor();
			Log.d(TAG,"success");
			return true;

		} catch (IOException ioe) {
//			ioe.printStackTrace();
			Log.d(TAG,"failed");
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
//			e.printStackTrace();
			Log.d(TAG,"failed");
		}

		Log.d(TAG,"trying /system/sbin/chmod");		
		try {
			String[] cmd = { "/system/sbin/chmod", "775",
					dir + file };
			File location = new File("/system/sbin");
			Process p = Runtime.getRuntime().exec(cmd, null, location);
			p.waitFor();
			Log.d(TAG,"success");
			return true;
			
		} catch (IOException ioe) {
//			ioe.printStackTrace();
			Log.d(TAG,"failed");
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
//			e.printStackTrace();
			Log.d(TAG,"failed");
		}

		
		return false;
	}
	
	public boolean rootCheck() {
		// TODO Auto-generated method stub
		if(	new File("/system/bin/su").exists() ||
			new File("/system/xbin/su").exists() ||
			new File("/system/xbin/bb/su").exists()){
			return true;
		}else{

			return false;
		}
	}	
/*	public boolean mkdir(String dir) {
		// Log.e(TAG,"chmod\n");
		try {
			String[] cmd = { "/system/bin/mkdir",
					"/data/data/com.webkey/files/" + dir };
			File location = new File("/system/bin/");
			Runtime.getRuntime().exec(cmd, null, location);
			return true;
		} catch (IOException ioe) {
//			ioe.printStackTrace();
		}
		try {
			String[] cmd = { "/system/xbin/mkdir",
					"/data/data/com.webkey/files/" + dir };
			File location = new File("/system/xbin/");
			Runtime.getRuntime().exec(cmd, null, location);
			return true;
		} catch (IOException ioe) {
//			ioe.printStackTrace();
		}
		try {
			String[] cmd = { "/system/xbin/bb/mkdir",
					"/data/data/com.webkey/files/" + dir };
			File location = new File("/system/xbin/bb");
			Runtime.getRuntime().exec(cmd, null, location);
			return true;
		} catch (IOException ioe) {
//			ioe.printStackTrace();
		}
		return false;
	}
*/

}
