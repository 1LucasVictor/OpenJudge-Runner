#include<stdio.h>
int main(void){
    int n,k;
    scanf("%d %d",&n,&k);
    if(n%k>(double)k/2.0){
        n=(-1)*(n-k*((int)(n/k)+1));
    }else{
        n=n-k*((int)(n/k));
    }
    printf("%d",n);
    return 0;
}