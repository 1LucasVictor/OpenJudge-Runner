#include <stdio.h>

void frame(int, int);

int main(void) {
    int h, w;
    while(scanf("%d %d", &h, &w), h || w) {
        frame(h, w), printf("\n");
    }
    return 0;
}

void frame(int h, int w) {
    int i, j;
    for(i = 0; i < h; i++) {
        for(j = 0; j < w; j++) {
            if(!i || !j || i == ~-h || j == ~-w) {
                printf("#");
            } else {
                printf(".");
            }
        }
        printf("\n");
    }
}