#include <graphics.h>
#include <iostream>
#include <cmath>

using namespace std;


void drawDDALine(int x1, int y1, int x2, int y2, int color){
	
	float dx= x2-x1;
	float dy= y2-y1;
	
	int steps=max(abs(dx),abs(dy));
	
	float xin=dx/(float)steps;
	float yin=dy/(float)steps;
	
	float x=x1,y=y1;
	
	for(int i=0; i<=steps; i++){
		putpixel(round(x),round(y),color);
		x+=xin;
		y+=yin;
		
		
		
	}
	
}


int main(){
	int gd=DETECT, gm;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"");
	
	
	
	
 	arc(70,100,90,180,50);
 
	
	
	
	
	
	
	
	
	getch();
	closegraph();
	
	return 0;
	
	
	
}
