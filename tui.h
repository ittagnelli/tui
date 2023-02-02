#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

#define NERO 30
#define ROSSO 31
#define VERDE 32
#define GIALLO 33
#define BLU 34
#define MAGENTA 35
#define CIANO 36
#define BIANCO 37

void refresh() { fflush(stdout); }

void clear() { printf("\033[H\033[J"); }

void go_to(int x, int y) { printf("\033[%d;%dH", y, x); }

void set_color(int color) { printf("\033[0;%dm", color); }

void set_bold(bool bold) { printf("\033[%dm", bold); }

void panel(int x, int y, int w, int h, char sym) {
    go_to(x, y);
    for (int i = 0; i < w; i++)
        printf("%c", sym);
    for (int i = 0; i <= h; i++) {
        go_to(x, y + i);
        printf("%c", sym);
        go_to(x + w, y + i);
        printf("%c", sym);
    }
    go_to(x, y + h);
    for (int i = 0; i < w; i++)
        printf("%c", sym);
    go_to(x + w, y + h);
}
