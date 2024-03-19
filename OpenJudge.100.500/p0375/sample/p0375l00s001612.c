#include <stdio.h>

int main(void)
{
    int n,i,x;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        x=i;
        if(x%3==0){
            printf(" %d",i);
        }else{
            while(x){  //whileでも問題ない
                if(x%10==3){
                    printf(" %d",i);
                    x=0;
                }else{
                x/=10;
                }
            }
/*            do{
                if(x%10==3){
                    printf(" %d",i);
                    x=0;
                }else{
                x/=10;
                }
            }while(x); 19行目の処理でx=0になったとき偽となり処理から抜ける*/
        }
    }
    printf("\n");
    return 0;
}
