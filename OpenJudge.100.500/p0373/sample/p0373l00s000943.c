#include <stdio.h>
int main(void){

int H,W,i,j;

    for(;;){
        scanf("%d %d\n",&H,&W);
        if(H==0&&W==0)break;
        for(j=1;j<=H;j++){
            for(i=1;i<=W;i++){
                if(1<i&&i<W&&1<j&&j<H){
                    putchar('.');
                }else{
                    putchar('#') ;
                }    
            }
            putchar('\n');
        }
        putchar('\n');
    }
    
    return 0;
    
}

