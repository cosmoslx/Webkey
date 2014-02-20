package com.webkey.remotescreen;

import java.io.FilterInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.SocketTimeoutException;
import java.net.UnknownHostException;
import java.util.EmptyStackException;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.ProgressDialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.opengl.GLSurfaceView;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.preference.PreferenceManager;
import android.util.Log;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.Window;
import android.view.WindowManager;

import com.webkey.DigestHttp;
import com.webkey.R;

public class RemoteScreenUtil extends Activity {
	
	private static final int MSG_LOADING = 0;
    private static final int MSG_LOADING_DISMISS = 1;
    private static final int MSG_SHOW_EXCEPITON = 2;
    private static final int MSG_LOGIN = 3;
    private static final int MSG_DISCONNECTED = 4;
    
    static RemoteGLRenderer remoteGLRenderer;
    static DigestHttp digestHttp = new DigestHttp();
    static DigestHttp digestTouch = new DigestHttp();
    static DigestHttp digestWakeScreen = new DigestHttp();
    
    public static String url;
    
    public static DownloadScreen downloadThread;
    public static WakeScreen wakeScreen;
            
	Handler uiHandler = new Handler();
    
	private static ProgressDialog spinner;
	
	@Override
	protected void onSaveInstanceState(Bundle outState) {
		    //No call for super(). Bug on API Level > 11.
	}
     @Override
    public void onCreate(Bundle savedInstanceState) {            	
        super.onCreate(savedInstanceState);
        getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
        this.requestWindowFeature(Window.FEATURE_NO_TITLE);
        this.getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
        		WindowManager.LayoutParams.FLAG_FULLSCREEN);
                
        //Create openGL view;        
        remoteGLRenderer = new RemoteGLRenderer(this);
        
        GLSurfaceView view = remoteGLRenderer;
		view.setRenderer(remoteGLRenderer);		
		setContentView(view);
        view.requestFocus();
        view.setFocusableInTouchMode(true);
        
        //Create "lodaing progress dialog
        spinner = new ProgressDialog(RemoteScreenUtil.this);
        spinner.setIndeterminate(true);
        spinner.setMessage("Loading Data...");
        spinner.dismiss();
        
        wakeScreen = new WakeScreen();
		wakeScreen.start();
        
		downloadThread = new DownloadScreen();
		downloadThread.start();
		
	}
    

    @Override
    protected void onPause() {
    	super.onPause();    	
  //  	Log.d("Webkey_java_util: ", "pause");
    	downloadThread.setPaus();
    	wakeScreen.setPaus();    	
    }
    
    @Override
    protected void onResume() {
    	super.onResume();
		spinner.show();
    	String urlTmp = readSettingsUrl();
//    	Log.d("Webkey_java | RemoteScreenUtil: ","url: "+urlTmp);
    
    	Intent intent = getIntent();
        /*
         * data[0]=username
         * data[1]=passwd
         * data[2]=address
         */
//    	
        if(intent.hasExtra("data")){
        	String data[] = intent.getStringArrayExtra("data");
        	boolean proxy = intent.getBooleanExtra("proxy", false);
        	
        	digestHttp.setUserPass(data[0], data[1]);
        	digestHttp.setAddress(data[2], proxy);
        	
        	digestWakeScreen.setUserPass(data[0], data[1]);        	
        	digestWakeScreen.setAddress(data[2], proxy);
        	
        	digestTouch.setUserPass(data[0], data[1]);
        	digestTouch.setAddress(data[2], proxy);        	
        	
        	remoteGLRenderer.setHttpClient(digestTouch);        	
        }
            	    	
        url=urlTmp;
    	digestHttp.setUri(url);
    	
    	digestWakeScreen.changedAddress();    	
    	digestHttp.changedAddress();
    	digestTouch.changedAddress();
    	
    	synchronized (downloadThread) {
    		downloadThread.notify();	
		}
    	
    	synchronized (wakeScreen) {
    		wakeScreen.notify();	
		}
    	
    }
            
    @Override
    protected void onDestroy(){
    	super.onDestroy();
    }
    
    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        MenuInflater inflater = getMenuInflater();
        inflater.inflate(R.layout.remotescreenmenu, menu);
        return super.onCreateOptionsMenu(menu);
    }

    public boolean onOptionsItemSelected(MenuItem item) {
    	switch (item.getItemId()) {
        	case R.id.quality:
                Intent settingsActivity = new Intent(getBaseContext(), RemoteQualitySettings.class);
                startActivity(settingsActivity);
                return true;
        	case R.id.disconnect:            		
            	mHandler.sendEmptyMessage(MSG_DISCONNECTED);            	
        		break;
        	case R.id.backey:
        		digestTouch.setUri("/button_4");
				try{
					digestTouch.executPost();
					
				}catch(Exception e){};
        		break;
        	case R.id.menukey:
        		digestTouch.setUri("/button_82");
				try{
					digestTouch.executPost();
					
				}catch(Exception e){};
        		break;
        	case R.id.homekey:
        		digestTouch.setUri("/button_3");
				try{
					digestTouch.executPost();
					
				}catch(Exception e){};
        		break;
    	}
        return false;
    }
    
    Handler mHandler = new Handler() {
    	public void handleMessage(final Message msg) {    		
            switch (msg.what) {
            	case MSG_LOADING:
            		spinner.show();
            		break;
            	
            	case MSG_LOADING_DISMISS:            		
            		try{
            			spinner.dismiss();
            		}catch(Exception e){}
            		break;
            	
            	case MSG_SHOW_EXCEPITON:
            		try{
//            			Log.d("Webkey_java: ","http hiba:"+msg.getData().getString("error"));
            			spinner.dismiss();
            			showDialog(msg.getData().getString("error"), getString(R.string.warning));            			
            		}catch(Exception e){}
            		break;
            		
            	case MSG_LOGIN:            		
            		spinner.show();            		
            		break;            		   
        			
            	case MSG_DISCONNECTED:
            		downloadThread.shutdown();
            		wakeScreen.shutdown();
            		finish();
        			break;
            }

    	}
    };
    
    class WakeScreen extends Thread{
    	public volatile boolean pause = true;
    	public volatile boolean running = true;
    	
    	public void run(){
            digestWakeScreen.setUri("/button_28");
    		while(running){    			    			
				if(pause){
					try {
						synchronized (this) {
							 wait();								
						}
						pause=false;
					} catch (InterruptedException e) {}
				}
				
    			try{
 //   				Log.d("Webkey_hava: ","send wake");
    				digestWakeScreen.executPost();    				
    			}catch(Exception e){}
    			
    			try{
    				Thread.sleep(10000);
    			}catch(InterruptedException e){};
    			
    		}
    	}
    	
		public synchronized void setPaus(){
			pause=true;
		}
		
		public synchronized void resuePaus(){
			pause=false;
		}
		
		public synchronized void shutdown(){
			running=false;
		}
    }
    
    class DownloadScreen extends Thread{
    	public volatile boolean pause = true;
    	public volatile boolean running = true;
    	boolean dismiss = true;
    	
    	InputStream img=null;
    	Bitmap bmp=null;
    	
		public void run(){									
			while(running){
				if(pause){				
					try {
						dismiss=true;
						synchronized (this) {
							wait();
						}
						pause=false;												
					}catch(InterruptedException e){}
				}											
				
				try {
					img = digestHttp.downloadImg();
					bmp = BitmapFactory.decodeStream(new FlushedInputStream(img));
				} catch (UnknownHostException e){
					showHttpException(getString(R.string.remotescreen_exception_unknownhost));
					return;
				} catch (SocketTimeoutException e){
					showHttpException(getString(R.string.remotescreen_exception_timedout));
					return;
				} catch (Exception e){
					if( digestHttp.getRCode()==401 ){
						showHttpException(getString(R.string.remotescreen_exception_401));	
					}else if(digestHttp.getRCode()==404){
						showHttpException(getString(R.string.remotescreen_exception_404));
					}else{			
						//showHttpException(Integer.toString(digestHttp.getRCode()));
						showHttpException("unable to connect");
					}
					return;
				}
				
				// TODO: kell ez ide?
				if(bmp==null){
					showHttpException(getString(R.string.remotescreen_exception_404));
					return;
				}else{
					remoteGLRenderer.setTexture(bmp);
				}
				
				try {
					img.close();
				} catch (IOException e) {
					e.printStackTrace();
				}
				
				if(dismiss){
//					Log.d("Webkey_java: ","na most kuldok dismisst");
					mHandler.sendEmptyMessage(MSG_LOADING_DISMISS);
					dismiss = false;
				}
			}
		}

		public synchronized void shutdown() {
			running=false;			
		}

		public synchronized void setPaus(){			
			pause=true;
		}    
		    					
		private void showHttpException(String m){
			Message msg = new Message();
			Bundle data = new Bundle();				
			data.putString("error", m);
			msg.setData(data);		
			msg.what=MSG_SHOW_EXCEPITON;
			mHandler.sendMessage(msg);			
		}
	
    
		//3rd code
	   class FlushedInputStream extends FilterInputStream {
	        public FlushedInputStream(InputStream inputStream) {
	            super(inputStream);
	        }

	        @Override
	        public long skip(long n) throws IOException {
	            long totalBytesSkipped = 0L;
	            while (totalBytesSkipped < n) {
	                long bytesSkipped = in.skip(n - totalBytesSkipped);
	                if (bytesSkipped == 0L) {
	                    int b = read();
	                    if (b < 0) {
	                        break;  // we reached EOF
	                    } else {
	                        bytesSkipped = 1; // we read one byte
	                    }
	                }
	                totalBytesSkipped += bytesSkipped;
	            }
	            return totalBytesSkipped;
	        }
	    }			
		
    }
    
    
    public String readSettingsUrl(){    	
    	SharedPreferences prefs = PreferenceManager.getDefaultSharedPreferences(getBaseContext());
    	boolean defaultOrient=true;
    	if(remoteGLRenderer.displayHeight<remoteGLRenderer.displayWidth){
    		defaultOrient=true;
    	}else
    		defaultOrient=false;
    			
    	
        String formatum = prefs.getBoolean("rscformatum",true)?"png":"jpg";
        String lowr = prefs.getBoolean("rsclowres",true)? "l":"n";
        String fli = prefs.getBoolean("rscflip",false)?"f":"n";
        String f = prefs.getBoolean("rscframebuffer",true)?"f":"n";
        String or = prefs.getBoolean("rscorient",defaultOrient)? "h":"v";        
        String w = prefs.getBoolean("rscwaitfordiff",false)?"n":"n";
        String asfile="n";
        remoteGLRenderer.setLowres(prefs.getBoolean("rsclowres",true));        
        remoteGLRenderer.setOrient(prefs.getBoolean("rscorient",defaultOrient));
        
        return "/screenshot."+formatum+"?"+or+lowr+f+fli+w+asfile;
    }

    private void showDialog(String message, String title) {
		AlertDialog.Builder alert = new AlertDialog.Builder(this);
	    downloadThread.shutdown();    		
	    wakeScreen.shutdown();
	    
	    alert.setNeutralButton("Ok", new DialogInterface.OnClickListener() {
	    	 public void onClick(DialogInterface dialog, int whichButton) {
	    		 mHandler.sendEmptyMessage(MSG_DISCONNECTED);
	    	 }
	     });
		alert.setIcon(R.drawable.icon);
		alert.setTitle(title);
		alert.setMessage(message);		
		alert.show();
	} 
}
    

