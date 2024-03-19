#include<stdio.h>

int main(void){

    long int X,ans;

    scanf("%ld",&X);
    ans = (X / 500) * 1000;
    ans += ((X % 500) / 5) * 5;

    printf("%ld\n",ans);
    return 0;
}