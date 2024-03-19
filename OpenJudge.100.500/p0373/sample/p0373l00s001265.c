#include <stdio.h>
 
int main() {
    int H, W, i, j;
    while (scanf("%d%d", &H, &W) == 2 && (H || W)) {
        for (j = 0; j < W; j++) {
            printf("#");
        }
        printf("\n");
        for (i = 1; i < H-1; i++) {
            printf("#");
            for (j = 1; j < W - 1; j++) {
                printf(".");
            }
            printf("#\n");
        }
        for (j = 0; j < W; j++) {
            printf("#");
        }
        printf("\n\n");
    }
    return 0;
}