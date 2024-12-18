#include <graphics.h>
#include <iostream>
#include <cmath>

using namespace std;

// Function to implement DDA line-drawing algorithm
void drawDDALine(int x1, int y1, int x2, int y2, int color) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    int steps = max(abs(dx), abs(dy)); // Maximum of |dx| or |dy|

    float xIncrement = dx / (float)steps; // Increment along x-axis
    float yIncrement = dy / (float)steps; // Increment along y-axis

    float x = x1;
    float y = y1;

    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), color); // Plot the pixel
        x += xIncrement; // Increment x-coordinate
        y += yIncrement; // Increment y-coordinate
    }
}

int main() {
    // Initialize graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm);

    // Base rectangle (front view)
    drawDDALine(100, 300, 160, 300, WHITE); // Bottom edge (60 units)
    drawDDALine(100, 300, 100, 240, WHITE); // Left edge (60 units)
    drawDDALine(100, 240, 160, 240, WHITE); // Top edge
    drawDDALine(160, 300, 160, 240, WHITE); // Right edge

    // Bottom rectangle (base extension)
    drawDDALine(160, 300, 220, 300, WHITE);
    drawDDALine(220, 300, 220, 260, WHITE);
    drawDDALine(220, 260, 160, 260, WHITE);
    drawDDALine(160, 300, 160, 260, WHITE);

    // Back vertical rectangle (upper)
    drawDDALine(160, 240, 190, 210, WHITE);
    drawDDALine(190, 210, 250, 210, WHITE);
    drawDDALine(250, 210, 250, 270, WHITE);
    drawDDALine(190, 240, 250, 270, WHITE);

    // Middle small rectangle cutout
    drawDDALine(160, 300, 180, 300, WHITE);
    drawDDALine(180, 300, 180, 280, WHITE);
    drawDDALine(180, 280, 160, 280, WHITE);
    drawDDALine(160, 280, 160, 300, WHITE);

    // Circle on the front face
    circle(130, 270, 20); // Draw circle with radius 20

    // Perspective diagonal edges
    drawDDALine(100, 300, 130, 330, WHITE);
    drawDDALine(160, 300, 190, 330, WHITE);
    drawDDALine(220, 300, 250, 330, WHITE);
    drawDDALine(250, 210, 280, 240, WHITE);

    drawDDALine(190, 210, 220, 180, WHITE);
    drawDDALine(220, 180, 280, 180, WHITE);
    drawDDALine(280, 180, 280, 240, WHITE);

    // Hold the screen
    getch();
    closegraph();
    return 0;
}

