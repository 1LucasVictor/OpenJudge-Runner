#include<stdio.h>
#include <math.h>

int main(void){
    long long int n,k,r,a;
    scanf("%lld %lld",&n,&k);
    if(k!=0){
        r=n%k;
        if(r<fabs(r-k)){
            a=r;
        }else{
            a=fabs(r-k);
        }
    }else{
        a=n;
    }
    printf("%lld",a);
    return 0;
}