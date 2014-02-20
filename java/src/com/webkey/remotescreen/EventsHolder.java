package com.webkey.remotescreen;

public class EventsHolder {
	int x;
	int y;
	int action;
	
	public void setX(int x){
		this.x = x; 
	}

	public void setY(int y){
		this.y = y;
	}
	
	public void setAction(int action){		
		int tAction = 2;
		
		if(action==1)
			tAction = 0;
		else if(action==0)
			tAction = 1;
		
		this.action = tAction;
	}
	
	public int getX(){
		return x;
	}
	public int getY(){
		return y;
	}
	
	public int getAction(){
		return action;
	}
}
