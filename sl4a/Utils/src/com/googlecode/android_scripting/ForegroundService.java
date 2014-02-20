package com.googlecode.android_scripting;

import android.app.Notification;
import android.app.NotificationManager;
import android.app.Service;

import java.lang.reflect.Method;

public abstract class ForegroundService extends Service {
private static final Class<?>[] mSetForegroundSignature = new Class[] {
	    boolean.class};
private static final Class<?>[] mStartForegroundSignature = new Class[] {
	    int.class, Notification.class};
private static final Class<?>[] mStopForegroundSignature = new Class[] {
	    boolean.class};

private Method mSetForeground;
private Method mStartForeground;
private Method mStopForeground;
private Object[] mSetForegroundArgs = new Object[1];
private Object[] mStartForegroundArgs = new Object[2];
private Object[] mStopForegroundArgs = new Object[1];

  private final int mNotificationId;

  private NotificationManager mNotificationManager;
  /*
  private NotificationManager mNotificationManager;
  private Method mStartForeground;
  private Method mStopForeground;
  private Object[] mStartForegroundArgs = new Object[2];
  private Object[] mStopForegroundArgs = new Object[1];
*/
void invokeMethod(Method method, Object[] args) {
    try {
        method.invoke(this, args);
//    } catch (InvocationTargetException e) {
        // Should not happen.
//        Log.w("ApiDemos", "Unable to invoke method", e);
    } catch (Exception e) {
        // Should not happen.
//        Log.w("ApiDemos", "Unable to invoke method", e);
    }
}

  public ForegroundService(int id) {
    mNotificationId = id;
  }


/**
 * This is a wrapper around the new startForeground method, using the older
 * APIs if it is not available.
 */
void startForegroundCompat(Notification notification) {
    // If we have the new startForeground API, then use it.
    if (mStartForeground != null) {
        mStartForegroundArgs[0] = Integer.valueOf(mNotificationId);
        mStartForegroundArgs[1] = notification;
        invokeMethod(mStartForeground, mStartForegroundArgs);
        return;
    }

    // Fall back on the old API.
    mSetForegroundArgs[0] = Boolean.TRUE;
    invokeMethod(mSetForeground, mSetForegroundArgs);
    mNotificationManager.notify(mNotificationId, notification);
}

/**
 * This is a wrapper around the new stopForeground method, using the older
 * APIs if it is not available.
 */
void stopForegroundCompat() {
    // If we have the new stopForeground API, then use it.
    if (mStopForeground != null) {
        mStopForegroundArgs[0] = Boolean.TRUE;
        invokeMethod(mStopForeground, mStopForegroundArgs);
        return;
    }

    // Fall back on the old API.  Note to cancel BEFORE changing the
    // foreground state, since we could be killed at that point.
    mNotificationManager.cancel(mNotificationId);
    mSetForegroundArgs[0] = Boolean.FALSE;
    invokeMethod(mSetForeground, mSetForegroundArgs);
}

@Override
public void onCreate() {
    mNotificationManager = (NotificationManager) getSystemService(NOTIFICATION_SERVICE);
    try {
        mStartForeground = getClass().getMethod("startForeground",
                mStartForegroundSignature);
        mStopForeground = getClass().getMethod("stopForeground",
                mStopForegroundSignature);
        return;
    } catch (NoSuchMethodException e) {
        // Running on an older platform.
        mStartForeground = mStopForeground = null;
    }
    try {
        mSetForeground = getClass().getMethod("setForeground",
                mSetForegroundSignature);
    } catch (NoSuchMethodException e) {
        throw new IllegalStateException(
                "OS doesn't have Service.startForeground OR Service.setForeground!");
    }
}

@Override
public void onDestroy() {
    // Make sure our notification is gone.
    stopForegroundCompat();
}

  protected abstract Notification createNotification();

}
