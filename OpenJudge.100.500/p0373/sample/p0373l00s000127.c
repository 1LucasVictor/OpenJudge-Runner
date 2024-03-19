#include <stdio.h>
int main(void)
{
    int i,j;
    int H,W;
    for(;;){
        scanf("%d %d",&W,&H);
        if(H+W==0) 
            break;
        for(i=0;i<W;i++){
            for(j=0;j<H;j++){
                if(i*j==0||i+1==W||j+1==H){
                    printf("#");
                }
                else{
                    printf(".");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
