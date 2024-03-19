#include<stdio.h>
#include <math.h>

int main(void){
    double n,k,r;
    int a;
    scanf("%lf %lf",&n,&k);
    r=n-k*floor(n/k);
    if(n>k){
        if(r<k/2){
            a=r;
        }else{
            a=k-r;
        }
    }else if(n<k){
        if(n>k/2){
            a=k-n;
        }else{
            a=n;
        }
    }else if(n=k){
        a=0;
    }
    printf("%d",a);
    return 0;
}