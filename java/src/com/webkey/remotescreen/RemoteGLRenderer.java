package com.webkey.remotescreen;

import java.util.ArrayList;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;
import javax.microedition.khronos.opengles.GL11Ext;

import com.webkey.DigestHttp;
import com.webkey.R;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Canvas;
import android.opengl.GLES11;
import android.opengl.GLSurfaceView;
import android.opengl.GLSurfaceView.Renderer;
import android.opengl.GLU;
import android.opengl.GLUtils;
import android.os.SystemClock;
import android.util.Log;
import android.view.MotionEvent;

public class RemoteGLRenderer extends GLSurfaceView implements Renderer {
	
	boolean touchCanBeSent=true;
	ArrayList<EventsHolder> motionEvents = new ArrayList<EventsHolder>();
	DigestHttp digestTouch;	
	
	public RemoteGLRenderer(Context context) {
		super(context);
		this.context = context;			
	}

	@Override
	public boolean onTouchEvent(MotionEvent event) {		
		EventsHolder eH = new EventsHolder();	
		eH.setAction(event.getAction());
		
		if(halfSize){
			eH.setX( ((int)event.getX()*(bitmapWidth*2))/displayWidth);
			eH.setY( ((int)event.getY()*(bitmapHeight*2))/displayHeight);		
		}else{			
			eH.setX( ((int)event.getX()*bitmapWidth)/displayWidth);
			eH.setY( ((int)event.getY()*bitmapHeight)/displayHeight);
		}		
		
		motionEvents.add(eH);				
		if(touchCanBeSent==true){
			if (eH.getAction() == 0 || eH.getAction() == 2)
			{
				touchCanBeSent=false;
				ArrayList<EventsHolder> tmpHolder = (ArrayList<EventsHolder>) motionEvents.clone();
				motionEvents.clear();
				sendTouch(tmpHolder);
			}
			else if (eH.getAction() == 1)
			{
				touchCanBeSent=false;
				new Thread() {
				    public void run() {            
					    try{
						    Thread.sleep(300);
					    }catch(InterruptedException e){ };
					    ArrayList<EventsHolder> tmpHolder = (ArrayList<EventsHolder>) motionEvents.clone();
					    motionEvents.clear();
					    sendTouch(tmpHolder);
				    }
				}.start();
			}
		}
    	return true;
    }
	
	public void sendTouch(final ArrayList<EventsHolder> mEvents){
		
        new Thread() {
            public void run() {            
				if (mEvents.size() == 0)
					return;
				String data ="";					
				//Log.d("Webkey_java: ","sendTouch: ("+mEvents.size()+")");
				for(int i=0; i < mEvents.size(); i++){
					
					int x = mEvents.get(i).getX();
					int y = mEvents.get(i).getY();
					int a = mEvents.get(i).getAction();
					data=data+"_"+orient+x+"_"+y+"_"+a;
				}
				digestTouch.setUri("/touch");
				try{
					digestTouch.executPost(data);
					clearTouchBuffer();
				}catch(Exception e){
					//Log.e("Webkey_java","EXCEPTION VAN: "+e.toString());
					clearTouchBuffer();
				};				
		
            }
        }.start();
	}
	
	public void clearTouchBuffer(){				
		if(motionEvents.size()>0){			
			ArrayList<EventsHolder> tmpHolder = (ArrayList<EventsHolder>) motionEvents.clone();
			motionEvents.clear();
			sendTouch(tmpHolder);
		}else{
			touchCanBeSent=true;
		}
	}
	
	public void setHttpClient(DigestHttp digestTouch){
		this.digestTouch = digestTouch;
	}
	
	private Context context;    
    
    boolean upgradeFlag=false;
    Bitmap bitMap;    
    
    int displayWidth;
    int displayHeight;
    
    int bitmapHeight;
    int bitmapWidth;
    
    int[] textures = new int[1];
    boolean halfSize=false;
    String orient="v";
    
    /**
     * Performance variables
     */
    public	static long			time;
	public	static short		framerate;
	public	static long			fpsTime;
	public	static long			frameTime;
	public	static float		avgFPS;
    

    public void bindText(GL10 gl){    	
    	/*
		gl.glLoadIdentity();                    //Reset The Projection Matrix	
		gl.glMatrixMode(GL10.GL_PROJECTION);    //Select The Projection Matrix
		*/
		gl.glEnable(GL10.GL_TEXTURE_2D);		
			        
		gl.glBindTexture(GL10.GL_TEXTURE_2D, 0);
        gl.glDeleteTextures(1, textures, 0);             
        gl.glGenTextures(1, textures, 0);                
        gl.glBindTexture(GL10.GL_TEXTURE_2D, textures[0]);
        gl.glTexParameterf(GL10.GL_TEXTURE_2D, GL10.GL_TEXTURE_MIN_FILTER, GL10.GL_NEAREST);
        gl.glTexParameterf(GL10.GL_TEXTURE_2D, GL10.GL_TEXTURE_MAG_FILTER, GL10.GL_NEAREST);        
        GLUtils.texImage2D(GL10.GL_TEXTURE_2D, 0, bitMap, 0);        
        bitMap.recycle();
        
        upgradeFlag=false;
    }
    
	public void setTexture(Bitmap bmap){
		try{			
			bitmapWidth=bmap.getWidth();
			bitmapHeight=bmap.getHeight();		
				
			bitMap=enlargeBitmap(bmap, getNextHighestPO2(bitmapWidth), getNextHighestPO2(bitmapHeight));
				
			upgradeFlag=true;
		}catch (Exception e) {}
	}
    
	public void setLowres(boolean hSize){
		halfSize=hSize;
	}
	
	public void setOrient(boolean orient){
		this.orient = orient? "h":"v";        
	}
	
	
	public void onDrawFrame(GL10 gl) {
		if(upgradeFlag){
			bindText(gl);
		}
		
		time = SystemClock.uptimeMillis();

		if (time >= (frameTime + 1000.0f)) {
			frameTime = time;
			avgFPS += framerate;
			framerate = 0;
		}
			
		if (time >= (fpsTime + 3000.0f)) {
			fpsTime = time;
			avgFPS /= 3.0f;
			//Log.i("FPS: ", Float.toString(avgFPS));
			avgFPS = 0;
		}
		framerate++;

		gl.glLoadIdentity();                    //Reset The Projection Matrix
		gl.glMatrixMode(GL10.GL_PROJECTION);    //Select The Projection Matrix
        gl.glClear(GL10.GL_COLOR_BUFFER_BIT | GL10.GL_DEPTH_BUFFER_BIT);		
        int rect[]= new int[] {0, bitmapHeight, bitmapWidth, -bitmapHeight};
        GLES11.glTexParameteriv(GL10.GL_TEXTURE_2D, GL11Ext.GL_TEXTURE_CROP_RECT_OES, rect, 0);
        ((GL11Ext)gl).glDrawTexiOES(0, 0, 0,  displayWidth, displayHeight );
    }

	
	public void onSurfaceChanged(GL10 gl, int width, int height) {
        gl.glViewport(0, 0, width, height);
        displayWidth=width;
        displayHeight=height;
	}

	
	public void onSurfaceCreated(GL10 gl, EGLConfig arg1) {
		gl.glDisable(GL10.GL_FOG);
		gl.glDisable(GL10.GL_LIGHTING);
		gl.glDisable(GL10.GL_CULL_FACE);
		gl.glDisable(GL10.GL_ALPHA_TEST);
		gl.glDisable(GL10.GL_BLEND);
		gl.glDisable(GL10.GL_COLOR_LOGIC_OP);
		gl.glDisable(GL10.GL_DITHER);
		gl.glDisable(GL10.GL_STENCIL_TEST);
		gl.glDisable(GL10.GL_DEPTH_TEST);
		gl.glDisable(GL10.GL_COLOR_MATERIAL);
		
		gl.glEnable(GL10.GL_TEXTURE_2D);	
		gl.glClearColor(0.2f, 0.4f, 0.6f, 1.0f);
        setTexture(BitmapFactory.decodeResource(context.getResources(), R.drawable.icon_gray));
	}
	
	public void getError(GL10 gl){
		int error;	
		while((error = gl.glGetError()) != GL10.GL_NO_ERROR){
			Log.e("Webkey_java | RemoteGLRenderer: ", "glerror: "+error+ " "+GLU.gluErrorString(error));				    	
		}
	}
	
	public static int getNextHighestPO2( int n ) {
	    n -= 1;
	    n = n | (n >> 1);
	    n = n | (n >> 2);
	    n = n | (n >> 4);
	    n = n | (n >> 8);
	    n = n | (n >> 16);
	    n = n | (n >> 32);
	    return n + 1;
	}

    private static Bitmap enlargeBitmap(Bitmap oldBitmap, int newWidth, int newHeight) {
        Bitmap newBitmap;
        Canvas canvas;
        Bitmap.Config config;
        config = Bitmap.Config.ARGB_8888;
        newBitmap = Bitmap.createBitmap(newWidth, newHeight, config);
        canvas = new Canvas(newBitmap);
        canvas.drawBitmap(oldBitmap,0,0,null);
        return newBitmap;
    }
}
