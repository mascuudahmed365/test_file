#include <graphics.h>
#include <iostream>
#include <cmath>

using namespace std;

void dda(int x1, int y1,int x2,int y2, int color){
	float dx=x2-x1;
	float dy=y2-y1;
	
	int steps=max(abs(dx),abs(dy));
	
	float x_inc=dx/(float)steps;
	float y_inc=dy/(float)steps;
	
	float x=x1,y=y1;
	
	for(int i =0; i<=steps;i++){
		putpixel(round(x),round(y),color);
		x+=x_inc;
		y+=y_inc;
		
		
	}
	
	
	
	
	
	
}

int main(){
	
	int gd=DETECT,gm;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"");
	
	dda(80,350,80,250,WHITE);
	arc(80,220,90,270,30);
	dda(80,190,80,140,WHITE);
	dda(80,140,205,140,WHITE);
	arc(270,203,45,90+45,90);
	dda(335,140,500,140,WHITE);
	circle(280,240,80);
	dda(500,140,500,200,WHITE);
	arc(500,198+50,270,90,50);
	arc(130,200,0,180,30);
	dda(100,200,100,300,WHITE);
	arc(130,300,180,0,30);
	dda(160,200,160,300,WHITE);
	arc(450,200,0,180,30);
	dda(420,200,420,300,WHITE);
	dda(480,200,480,300,WHITE);
	arc(450,300,180,0,30);
	dda(500,300,500,350,WHITE);
	dda(500,350,80,350,WHITE);

	
	
	
	
	getch();
	closegraph();
	
	return 0;
	
	
	
	
}
