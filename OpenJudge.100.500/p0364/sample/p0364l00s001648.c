#include <stdio.h>

int main() {
    int W, H, x, y, r;
    scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
    if(x - r >= 0) {
        if(y - r >= 0) {
            if(x + r <= W) {
                if(y + r <= H) {
                    printf("Yes\n");
                } else {
                    printf("No\n");
                }
            } else {
                printf("No\n");
            }
        } else {
            printf("No\n");
        }
    } else {
        printf("No\n");
    }
}
