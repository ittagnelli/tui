#include "tui.h"

void pong() {
    // pong
    int x0 = 20;
    int y0 = 5;
    int w = 80;
    int h = 30;
    int pos_x = x0 + 2;
    int pos_y = y0 + 2;
    int verso_x = 1;
    int verso_y = 1;

    clear();
    set_color(BLU);
    panel(x0, y0, w, h, '#');
    set_color(VERDE);
    while(1) {
        if (pos_x == (x0 + w - 1))
            verso_x = -1;
        if (pos_x == (x0 + 1))
            verso_x = 1;
        pos_x += verso_x;

        if (pos_y == (y0 + h - 1))
            verso_y = -1;
        if (pos_y == (y0 + 1))
            verso_y = 1;
        pos_y += verso_y;

        go_to(pos_x, pos_y);
        printf("O");
        refresh();
        usleep(30000);
        go_to(pos_x, pos_y);
        printf(" ");
    }
    go_to(100, 100);
}

int main() {

    pong();
    
    return 0;
}