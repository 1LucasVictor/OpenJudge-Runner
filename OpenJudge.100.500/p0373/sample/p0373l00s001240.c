#include <stdio.h>
int main() {
    int H, W,j,k;
    while(1){
        scanf("%d %d", &H, &W);
        if(H == 0 && W == 0) break;
        for(j = 0; j < H;j++){
            for(k = 0;k < W; k++){
                if(j == 0 || j == H-1 || k == 0 || k == W - 1) printf("#");
                else printf(".");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
