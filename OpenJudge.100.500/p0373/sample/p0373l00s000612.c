#include <stdio.h>

int main(){
    int H, W, i, j, k;
    
    for(k=0; ; k++){
    scanf("%d%d", &H, &W);
    if (H==0 && W==0) break;
        for(i=0; i<H; i++){
            for(j=0; j<W; j++){
                if(i==0 || i==H-1){printf("#");}
                else if(j==0 || j==W-1){printf("#");}
                else printf(".");
            }
        printf("\n");
        }
    printf("\n");
    }
    return 0;
}