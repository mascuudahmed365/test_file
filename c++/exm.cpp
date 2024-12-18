#include <graphics.h>
#include <iostream>
#include <cmath>

using namespace std;



void DDL(int x1,int y1,int x2,int y2 ,int color ){
	
	int dx=x2-x1;
	int dy= y2-y1;
	
	int step=max(abs(dx),abs(dy));
	
	float x_in =dx/(float)step;
	float y_in =dy/(float)step;
	
	
	float x=x1,y=y1;
	
	for(int i=0; i<=step;i++){
		
		putpixel(round(x),round(y),color);
	 	x+=x_in;
		y+=y_in;
		
		
		
	}
}
int main(){
	int gd=DETECT,gm;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"");
	
	
	
	DDL(100,330,200,420,WHITE);
	DDL(200,420,200,230,WHITE);
	DDL(200,230,100,180,WHITE);
	DDL(100,180,100,330,WHITE);
	DDL(100,180,130,120,WHITE);
	DDL(130,120,250,170,WHITE);
	DDL(250,170,200,230,WHITE);
	circle(150,300,40);
	
	
	
	getch();
	closegraph();
	return 0;
	
	
	
	
}
