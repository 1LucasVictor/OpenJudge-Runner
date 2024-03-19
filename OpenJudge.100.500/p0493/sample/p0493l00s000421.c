#include <stdio.h>
int main(void)
{
    int X;
    scanf("%d",&X);
    if(X%500 == 0){
        printf("%d",X*2);
    }else{
        printf("%d",X/500*1000+X%500/5*5);
    }
    return 0;
}