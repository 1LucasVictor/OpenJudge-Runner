#include<stdio.h>

int main(void) {
    int w, h, x, y, r;
    int tmp;
    scanf("%d %d %d %d %d", &w, &h, &x, &y, &r );

    if(x >= 0 + r && y >= 0 + r && x <= w - r && y <= h - r) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }


    return 0;
}