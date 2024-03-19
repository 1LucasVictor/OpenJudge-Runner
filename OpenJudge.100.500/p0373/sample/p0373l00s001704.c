#include <stdio.h>
 
int main(void) {
    int i, j, H, W;
    for(; scanf("%d %d", &H, &W), H || W; printf("\n")) {
        for(i = -1; ++i < H; printf("\n")) {
            for(j = -1; ++j < W; printf("\n")) {
                printf("%c", (!i || i == ~-H || !j || j == ~-W) ? '#' : '.'); 
            }
        }
    }
    return 0;
}