#include <stdio.h>

void write(int, int);

int main() {
    int H, W, i, j;
    
    while(1) {
        
        scanf("%d%d", &H, &W);
        
        if (H == 0 && W == 0) break;
        
        write(H, W);
    }
    return 0;
}

void write(int H, int W) {
    int i, j;
    
    for (i = 0; i < H; i++) {
        for (j = 0; j < W; j++) {
            if (i == 0 || j == 0 || i == H-1 || j == W-1) {
                printf("#");
            }
            else printf(".");
        }
        printf("\n");
    }
    printf("\n");
}
