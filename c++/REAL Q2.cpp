#include <graphics.h>
#include <iostream>
#include <cmath>

using namespace std;
 
// DDA line drawing function
void drawDDALine(int x1, int y1, int x2, int y2, int color) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    int steps = max(abs(dx), abs(dy));

    float xIncrement = dx / (float)steps;
    float yIncrement = dy / (float)steps;

    float x = x1, y = y1;
    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), color);
        x += xIncrement;
        y += yIncrement;
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Base rectangle (front face)
//    drawDDALine(50,400,50,280, WHITE); // Bottom edge (60 units)
// 
    arc(70,100,0,180,50);
    drawDDALine(20,100,20,270,WHITE);
    arc(70,270,180,0,50);
    arc(140,100,180,0,20);
    arc(250,100,0,180,90);
    arc(360,100,180,0,20);
    arc(430,100,0,180,50);
    drawDDALine(480,100,480,270,WHITE);
    arc(430,270,180,0,50);
    arc(360,270,0,180,20);
    arc(250,270,180,0,90);
    arc(140,270,0,180,20);
    arc(70,100,0,180,30);//
    drawDDALine(40,100,40,270,WHITE);
    drawDDALine(100,100,100,270,WHITE);
    arc(70,270,180,0,30);
    arc(430,100,0,180,30);//
    drawDDALine(400,100,400,270,WHITE);
    drawDDALine(460,100,460,270,WHITE);
    arc(430,270,180,0,30);
    circle(260,180,20);
 	drawDDALine(220,150,180,100,WHITE);
 	drawDDALine(180,100,210,80,WHITE);
 	drawDDALine(210,80,250,130,WHITE);
 	arc(260,130,0,180,10);
 	drawDDALine(270,130,310,100,WHITE);
 	drawDDALine(310,100,340,150,WHITE);
 	drawDDALine(340,150,310,170,WHITE);
 	arc(290,170,290,0,20);
 	drawDDALine(297,190,340,230,WHITE);
 	drawDDALine(340,230,310,260,WHITE);
 	drawDDALine(310,260,260,220,WHITE);
 	arc(240,220,160,0,20);
 	drawDDALine(222,210,160,200,WHITE);
 	drawDDALine(160,200,150,170,WHITE);
 	drawDDALine(150,170,200,170,WHITE);
 	arc(217,170,90,180,20);
    
    
    
    
    
    
    
    
    
    getch();
    closegraph();
    return 0;
}

