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
package com.webkey.activity;

import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.SortedMap;
import java.util.TreeMap;

import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;
import org.xml.sax.InputSource;

import com.webkey.Ipc;
import com.webkey.R;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.DialogInterface.OnClickListener;
import android.graphics.Color;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.text.Spannable;
import android.text.SpannableString;
import android.text.style.ForegroundColorSpan;
import android.text.style.StyleSpan;
import android.util.Log;
import android.view.Gravity;
import android.view.KeyEvent;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.inputmethod.EditorInfo;
import android.widget.Button;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.ScrollView;
import android.widget.TextView;
import android.widget.LinearLayout.LayoutParams;
import android.widget.TextView.OnEditorActionListener;

public class ChatUI extends Activity{
	Ipc ipc;
	String POS="0";
	String ID="0";
	
	Context context;
	TextView chatText=null;
	LinearLayout chatLayout=null;
	EditText eText = null;
	SortedMap<Integer, String> posMap = new TreeMap<Integer, String>();	
    String whoreaded[];
    String string[];
	
    //NodeList nodeList;
    //NodeList readbyList;
	ScrollView sv;
	public static Thread downloadThread;
	private RefreshHandler mReReadHandler = new RefreshHandler();
	
	//boolean sec=false;
	boolean paused = false; 
	class RefreshHandler extends Handler {
		
	    @Override
	    public void handleMessage(Message msg) {	    	 			    	

	    	//Received clear message;
		    	if(msg.arg1 == 1){
		    		chatLayout.removeAllViews();
		    		posMap.clear();
//					Log.d("Webkey_java: ","Erase all views");
		    		return;
		    	//Backend not running
		    	}else if(msg.arg1 == 2){
		    		showDialog(getString(R.string.chat_servicenotrunning));		    									  
		    		return;
		    	}
		    
		    	for (Integer key : posMap.keySet()) {
		    		try{
		    			chatLayout.removeViewAt(key);
				    	//System.out.println("remove: "+Integer.toString(key)+" : "+posMap.get(key));
		    		}catch(Exception e){}
		    	}
			    posMap.clear();
			    
			    Document doc = (Document) msg.obj;
				NodeList readbyList =  doc.getElementsByTagName("readby");										
				NodeList nodeList = doc.getElementsByTagName("message");
				
		    	for (int i = 0; i < nodeList.getLength(); i++) {
		    		Node node = nodeList.item(i);
		    		Element fstElmnt = (Element) node;
		    		    				    		
	    			TextView dataV = new TextView(context);    			    			    			
	    			TextView sender = new TextView(context);
	    			
	    			//String color = getXMLValue(fstElmnt,"color");
	    			int colorI;
	    			if("phone".equals(getXMLValue(fstElmnt,"user"))){
	    					colorI=Color.BLUE;
	    			}else{
	    					colorI=Color.BLACK;
	    			}    					
	    			
	    				    			
	    			String name = getXMLValue(fstElmnt,"user");
	    			String time = convertTime(getXMLValue(fstElmnt,"time"));
	    			Spannable WordtoSpan = new SpannableString(time+" "+name+":");	    			
	    			WordtoSpan.setSpan(new ForegroundColorSpan(colorI), time.length()+1, time.length()+1+name.length(), Spannable.SPAN_EXCLUSIVE_EXCLUSIVE);	    			
	    			WordtoSpan.setSpan(new StyleSpan(android.graphics.Typeface.BOLD), time.length()+1, time.length()+1+name.length()+1, Spannable.SPAN_EXCLUSIVE_EXCLUSIVE);
	    			sender.setText(WordtoSpan);
	    			
	    			
	    			dataV.setText(getXMLValue(fstElmnt,"data"));
	    			dataV.setTextColor(Color.BLACK);
	    			dataV.setBackgroundColor(Color.WHITE);	    			
	    			
	    			LinearLayout l = new LinearLayout(context);
	    			l.setOrientation(LinearLayout.VERTICAL);
	    			l.setBackgroundColor(Color.WHITE);
	    			l.setPadding(5, 0, 0, 0);
	    			l.addView(sender);
	    			l.addView(dataV);
	    			chatLayout.addView(l, new LinearLayout.LayoutParams(LayoutParams.FILL_PARENT, LayoutParams.WRAP_CONTENT));
		    	}
		   	   
			for(int i=0; i < readbyList.getLength(); i++){
				Node node = readbyList.item(i);
	    		Element fstElmnt = (Element) node;    		
			try{
				int pos= Integer.parseInt(getXMLValue(fstElmnt,"readby"));
				for(int j=i; j<readbyList.getLength(); j++){
					Node nodeJ = readbyList.item(j);
					Element fstElmntJ = (Element) nodeJ;
					String attributeJ = fstElmntJ.getAttribute("name");
					int posJ = Integer.parseInt(getXMLValue(fstElmntJ,"readby"));
					//Log.d("Webkey_java XML:",attribute+" - "+Integer.toString(pos)+" | "+attributeJ+" - "+Integer.toString(posJ));
					if(posJ==pos){
						String nev = posMap.get(posJ);
						if(nev!=null){
							nev=nev+", "+attributeJ;
						}else{
							nev=attributeJ;
						}
						posMap.put(posJ, nev);
						j=readbyList.getLength();
					}        			        	
				}
			}catch(Exception e){}

			}
	        
			int j=0;
			for (int key : posMap.keySet()) {
		    	//System.out.println("add: "+Integer.toString(key)+"+"+j+" : "+posMap.get(key));
				TextView readbyV = new TextView(context);
				readbyV.setText(getString(R.string.chatui_readby)+" "+posMap.get(key));
	    		readbyV.setTextSize(12);
	    		readbyV.setGravity(Gravity.RIGHT);
	    		readbyV.setPadding(0, 0, 10, 0);
	    		readbyV.setBackgroundColor(Color.GRAY);
	    		readbyV.setTextColor(Color.WHITE);
	    		try{    			    		
	    			chatLayout.addView(readbyV, key+j);			
	    			j++;
	    		}catch(Exception e){}
			}
			
	    	if(nodeList.getLength()!=0)	    
	    		sv.post(new Runnable() { 
	    		    public void run() { 
	    		        sv.fullScroll(ScrollView.FOCUS_DOWN); 
	    		    } 
	    		}); 
	    	
			sv.post(new Runnable() {
			    public void run() {
			        eText.requestFocus();
			    }
			});
	    }
	    
	    public String getXMLValue (Element elem, String kulcs){
	    	try{
	    		NodeList nodeList = elem.getElementsByTagName(kulcs);
    			Element nodeElement = (Element) nodeList.item(0);
    			nodeList = nodeElement.getChildNodes();
    			return nodeList.item(0).getNodeValue();
	    	}catch(Exception e){}
	    	return null;
	    }
	    
	    public String convertTime(String time){
	    	long utime = Long.parseLong(time);
	    	long timestamp = System.currentTimeMillis()/1000;
	    	SimpleDateFormat DateFormatter;
	    	if(utime<(timestamp-86400))
	    		DateFormatter = new SimpleDateFormat("[yyyy-MM-dd HH:mm:ss]");
	    	else
	    		DateFormatter = new SimpleDateFormat("[HH:mm:ss]");
	    	
	    	utime = utime*1000;	    		    	
	    	final Calendar cal = Calendar.getInstance();
	    	cal.setTimeInMillis(utime);
	    	Date date = cal.getTime();
	    	return  DateFormatter.format(date);	    	
	    }

		public void sendEmptyMessage(String string) {
			// TODO Auto-generated method stub
			//showDialog("hjwhw");
		}
	    
	};
		
	
	@Override
	protected void onSaveInstanceState(Bundle outState) {
		    //No call for super(). Bug on API Level > 11.
	}
	@Override
	public void onCreate(Bundle savedInstanceState) {
		//layout = new LinearLayout(this);
//		Log.d("WEBKEY_JAVA: ","Chat on create");
		super.onCreate(null);
			context = getApplicationContext();
			ipc = new Ipc(context);
			setContentView(R.layout.chat_ui);
			sv = (ScrollView) findViewById(R.id.chat_scroll);
			chatLayout = (LinearLayout) findViewById(R.id.chattextlayout);			
			
			Button sendButton = (Button) findViewById(R.id.send_button);
			eText = (EditText) findViewById(R.id.chat_message);

			
			sendButton.setOnClickListener(new View.OnClickListener() {
				public void onClick(View arg0) {
					String myMessage = eText.getText().toString();
					if(!myMessage.equals("")){
						sendMessage(myMessage, chatText);
					}
//						eText.setText("");
					eText.post(new Runnable() { 
						public void run() { 
							eText.setText("");
						}
					});
//				        eText.requestFocus();
				}
			});

			
			eText.setOnEditorActionListener(new OnEditorActionListener() {		
				public boolean onEditorAction(TextView v, int actionId,	KeyEvent event) {
			        if (actionId == EditorInfo.IME_ACTION_SEND || actionId == EditorInfo.IME_ACTION_UNSPECIFIED) {
						String myMessage = eText.getText().toString();
						if(!myMessage.equals("")){
							sendMessage(myMessage, chatText);
						}
//							eText.setText("");
							eText.post(new Runnable() { 
							    public void run() { 
							        eText.setText("");
							    }
							});
//					        eText.requestFocus();
			        }
					return false;
				}
			});
			
			downloadThread = new DownloadMessages();	
			downloadThread.start();
	}
	
	@Override
	public void onResume(){			
		super.onResume();
		
		ipc.notiyShow(context, "Running");
		
		if(((DownloadMessages) downloadThread).pleasWait==true){
			synchronized (downloadThread) {
				downloadThread.notify();
			}
		}
		
		sv.post(new Runnable() { 
		    public void run() { 
		        sv.fullScroll(ScrollView.FOCUS_DOWN); 
		    } 
		}); 
	
	}
	
	@Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate menu from XML resource
        MenuInflater inflater = getMenuInflater();
        inflater.inflate(R.layout.chatmenu, menu);
        return super.onCreateOptionsMenu(menu);
    }

	public boolean onOptionsItemSelected(MenuItem item) {
	    switch (item.getItemId()) {
	    case R.id.chat_menu_clear:
	        ipc.comBinAuth("phoneclearchatmessage");
	        return true;
	    }
	    return false;
	}
	
	@Override
	public void onPause(){
		super.onPause();
//		Log.d("Webkey_java","paused");		
		((DownloadMessages) downloadThread).pleasWait=true;		 
	}

	private void sendMessage(String myMessage, TextView chatText) {
		ipc.sendMessage(myMessage);
	}
	
	
	public class DownloadMessages extends Thread{
		public boolean pleasWait = false;

		public void run(){
			DocumentBuilderFactory dbf = DocumentBuilderFactory.newInstance();
			DocumentBuilder db;
			Document doc = null;
						
			while(true){
				synchronized (this) {				
				if(pleasWait){
//					Log.d("Webkey_java: ","Chat thread paused");
					try {
						wait();
					} catch (InterruptedException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
					pleasWait=false;
					}
				}
				
//				Log.d("Webkey_java: ","read");
				//fullTxt = fullTxt+"\n"+ipc.getMessages();
				try {
					db = dbf.newDocumentBuilder();
					InputSource iXML = ipc.getMessages(ID);
					
					if(iXML==null){
//						Log.d("Webkey_java","not running");
						Message msg = new Message();
						msg.arg1 = 2;
						mReReadHandler.sendMessage(msg);
						pleasWait=true;
						//return;
					}						
					doc = db.parse(iXML);				
					
					doc.getDocumentElement().normalize();

					NodeList nodeList = doc.getElementsByTagName("chat");
					Element element = (Element) nodeList.item(0);
					String tmpID = getXMLValue(element,"id");
					
					//ha vlaaki cleerelte akkor torlunk
					//TODO: ezt az uj XML-el ujra kell irni.
					if(!ID.equals(tmpID)){
//						Log.d("Webkey_java: ","Clearing....");
						Message msg = new Message();
						msg.arg1 = 1;
						mReReadHandler.sendMessage(msg);
					}
					ID=tmpID;
					
					Message msg = new Message();
					msg.obj = doc;
					mReReadHandler.sendMessage(msg);									
				} catch (Exception e1) {
					// TODO Auto-generated catch block
					e1.printStackTrace();
					try {
						Thread.sleep(1000);
					} catch (InterruptedException e) {
						//TODO Auto-generated catch block
						e.printStackTrace();					
					}
				}
				
			}
		}
		
	    public String getXMLValue (Element elem, String kulcs){
    		NodeList nodeList = elem.getElementsByTagName(kulcs);
    		Element nodeElement = (Element) nodeList.item(0);
    		nodeList = nodeElement.getChildNodes();
    		return nodeList.item(0).getNodeValue();    			    	
	    }
	}
	
	private void showDialog(String message) {
		AlertDialog.Builder alert = new AlertDialog.Builder(this);	
		
		alert.setNeutralButton("ok", new OnClickListener() {
			public void onClick(DialogInterface dia, int which) {				
				ipc.notiyDestroy(context);
			}
		}) ;		
		alert.setIcon(R.drawable.icon);
		alert.setTitle(getString(R.string.warning));
		alert.setMessage(message);		
		try{
			alert.show();
		}
		catch (Exception e){};
	}	
}
