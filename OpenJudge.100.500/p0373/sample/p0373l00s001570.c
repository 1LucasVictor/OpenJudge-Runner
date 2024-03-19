#include <stdio.h>

int main(){
    int H, W;
    int i, j;
    while(1){
        scanf("%d %d", &H, &W);
        if(H == 0)break;

        for(i = 0; i < H; i++){
            for(j = 0; j < W; j++){
                printf("%c%s", (i == 0 || i == H - 1 || j == 0 || j == W -1) ? '#' : '.', (j == W - 1) ? "\n" : "");
            }
            if(i == H - 1)printf("\n");
        }
    }
}
