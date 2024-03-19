#include <stdio.h>

int main(int argc, const char * argv[]) {
    int H,W,i,j;
    
    while (1) {
        scanf("%d %d",&H,&W);
        if (H==0&&W==0) {
            break;
        }
        for (i=1; i<=H; i++) {
                for (j=1; j<=W; j++) {
                    if (j==1||j==W||i==1||i==H) {
                        printf("#");
                    }else{
                        printf(".");
                    }
                }
                printf("\n");
        }
        printf("\n");
    }
    return 0;
}