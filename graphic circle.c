#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, ""); // Initialize graphics

    if (initgraph(&gd, &gm, "") == -1) {  //check if graphics initialization failed
        printf("Graphics initialization failed: %s\n", strerror(1));
        return 1;
    }

    int x = getmaxx() / 2; // Center of the screen
    int y = getmaxy() / 2;
    int radius = 50;

    circle(x, y, radius); // Draw the circle

    getch(); // Wait for a key press
    closegraph(); // Close the graphics window

    return 0;
}