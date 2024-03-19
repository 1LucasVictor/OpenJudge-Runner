#include<stdio.h>

int main() {
        int w, h, x, y, r;

        scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);

        // x
        if(x > r && x < w - r && y > r && y < w - r) {
                        printf("Yes\n");
        } else {
                        printf("No\n");
        }

        return 0;
}