/*
 * Copyright (C) 2010 Google Inc.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this file except in compliance with the License. You may obtain a copy of
 * the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations under
 * the License.
 */

package com.webkey;

import android.app.Notification;
import android.content.Intent;
import android.content.res.Resources;
import android.os.Binder;
import android.os.IBinder;

import com.googlecode.android_scripting.AndroidProxy;
import com.googlecode.android_scripting.BaseApplication;
import com.googlecode.android_scripting.Constants;
import com.googlecode.android_scripting.FeaturedInterpreters;
import com.googlecode.android_scripting.FileUtils;
import com.googlecode.android_scripting.ForegroundService;
import com.googlecode.android_scripting.Log;
import com.googlecode.android_scripting.NotificationIdFactory;
import com.googlecode.android_scripting.ScriptLauncher;
import com.googlecode.android_scripting.interpreter.Interpreter;
import com.googlecode.android_scripting.interpreter.InterpreterConfiguration;
import com.googlecode.android_scripting.interpreter.InterpreterUtils;
import com.googlecode.android_scripting.interpreter.html.HtmlActivityTask;
import com.googlecode.android_scripting.interpreter.html.HtmlInterpreter;
import com.googlecode.android_scripting.jsonrpc.RpcReceiverManager;

import java.io.File;
import java.io.FileInputStream;
import java.io.InputStream;
import java.net.InetSocketAddress;
import java.util.Timer;
import java.util.TimerTask;
import java.util.concurrent.CountDownLatch;

/**
 * A service that allows scripts and the RPC server to run in the background.
 * 
 * @author Alexey Reznichenko (alexey.reznichenko@gmail.com)
 * @author Manuel Narango
 */
public class ScriptService extends ForegroundService {
	private final static int NOTIFICATION_ID = NotificationIdFactory.create();
	private final IBinder mBinder;
	public static Ipc ipc;
    private static AndroidProxy mProxy = null;
    private Timer timer = new Timer();
    
	public class LocalBinder extends Binder {
	}

	public ScriptService() {
		super(NOTIFICATION_ID);
		mBinder = new LocalBinder();
	}

	@Override
	public IBinder onBind(Intent intent) {
		return mBinder;
	}

	@Override
	public void onCreate() {
		super.onCreate();
		ipc = new Ipc(getApplicationContext());
	}

	@Override
	public void onStart(Intent intent, final int startId) {
		super.onStart(intent, startId);
			if (mProxy != null)
				mProxy.shutdown();
			mProxy = new AndroidProxy(this, null, true);
//			mProxy = new AndroidProxy(this, null, false);
			InetSocketAddress net = mProxy.startLocal();
//			Log.e(Integer.toString(net.getPort()));
			int port = net.getPort();
			String secret = mProxy.getSecret();
			ipc.comBinAuth("/set_sl4a"+port+"_"+secret);
			//stop the service after an hour
			timer.schedule(new TimerTask() { 
				public void run(){ 
					stopSelf(); 
					if(mProxy != null) 
						mProxy.shutdown(); 
					}
				}, 3600000);
//			mProxy.startPublic();
	}
	@Override
	protected Notification createNotification() {
		return null;
	}
}
