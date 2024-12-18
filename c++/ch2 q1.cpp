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
    drawDDALine(50,400,50,280, WHITE); // Bottom edge (60 units)
	arc(50,250,445,270,30);
	drawDDALine(50,220,50,120,WHITE);
	drawDDALine(50,120,200,120,WHITE);
	arc(240,120,0,180,40);
	drawDDALine(280,120,400,120,WHITE);
	drawDDALine(400,120,400,220,WHITE);
	arc(400,250,270,450,30);
	drawDDALine(400,280,400,400,WHITE);
	drawDDALine(400,400,300,400,WHITE);
	arc(260,400,180,0,40);
	drawDDALine(220,400,50,400,WHITE);
	circle(230,240,70);
	arc(110,200,0,180,30);
	drawDDALine(80,200,80,290,WHITE);
	drawDDALine(140,200,140,290,WHITE);
	arc(110,290,180,0,30);
	arc(340,200,0,180,30);
	drawDDALine(310,200,310,290,WHITE);
	drawDDALine(310,200,310,290,WHITE);
	arc(340,290,180,0,30);
	drawDDALine(370,200,370,290,WHITE);
	
      
    getch();
    closegraph();
    return 0;
}

