#include<stdio.h>
#include <math.h>

int main(void){
    double n,k,r;
    int a;
    scanf("%lf %lf",&n,&k);
    r=n-k*floor(n/k);
    if(r<k-r){
        a=r;
    }else{
        a=k-r;
    }
    printf("%d",a);
    return 0;
}