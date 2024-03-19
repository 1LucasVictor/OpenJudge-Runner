#include<stdio.h>

int main(void){
    unsigned long N,K;
    scanf("%d",&N);
    scanf("%d",&K);

    int x=N,tmp=0;
    while(1){
        if(K==1){
            x=1;
            break;
        }
        x=(x<K)?K-x:x-K;
        if(tmp>x)   break;
        else    tmp=x;
    }

    printf("%d\n",x);

    return 0;
}