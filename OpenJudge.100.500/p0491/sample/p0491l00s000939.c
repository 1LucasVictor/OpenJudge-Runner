#include<stdio.h>
#include <math.h>

int main(void){
    double n,k,r;
    int a;
    scanf("%lf %lf",&n,&k);
    r=n-k*floor(n/k);
    if(r<abs(k-r)){
        a=r;
    }else{
        a=abs(k-r);
    }
    printf("%d",a);
    return 0;
}