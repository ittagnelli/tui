#include "tui.h"

void menu() {
    clear();
    set_color(VERDE);
    set_bold(true);
    panel(0, 0, 40, 13, '#');
    go_to(13,0);
    printf(" Menu di scelta ");
    go_to(7, 4);
    printf("1: opzione 1");
    go_to(7, 6);
    printf("2: opzione 2");
    go_to(7, 8);
    printf("3: opzione 3");
    go_to(7, 10);
    printf("0: Esci");
    go_to(0,21);
    set_bold(false);
}

int main() {

    menu();
    
    return 0;
}