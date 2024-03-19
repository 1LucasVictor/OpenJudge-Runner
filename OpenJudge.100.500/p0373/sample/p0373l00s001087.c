#include<stdio.h>
int main(void){
    int H,W;
    int i,j;
    while(1){
        scanf("%d %d",&H,&W);
        if((H==0)&&(W==0))
            break;
        for(j=0;j<W;j++)
            printf("#");
        printf("\n");
        for(i=1;i<H-1;i++){
            printf("#");
            for(j=1;j<W-1;j++)
                printf(".");
            printf("#");
            printf("\n");
        }
        for(j=0;j<W;j++)
                printf("#");
        printf("\n");
        printf("\n");
    }
    return 0;
}