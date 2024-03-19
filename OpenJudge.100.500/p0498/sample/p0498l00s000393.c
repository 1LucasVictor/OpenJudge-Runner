#include<stdio.h>

int main(void){

    int N,ans;

    scanf("%d",&N);
    if(N % 2 == 0){
        ans = N/2;
    }else{
        ans = N/2+1;
    }

    printf("%d\n",ans);
    return 0;
}