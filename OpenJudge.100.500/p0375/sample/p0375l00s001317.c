#include <stdio.h>

int main(void){
    int i,n,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%3==0){
            printf(" %d",i);
        }else{
            for(x = i;x > 0;x /= 10){ 
                if(x%10==3){
                    printf(" %d",i);
                }
            }
        }
    }
    printf("\n");
    return 0; /*0?????????*/
}