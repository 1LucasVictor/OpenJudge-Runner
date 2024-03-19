#include<stdio.h>
#include <math.h>

int main(void){
    double n,k,r;
    int a;
    scanf("%lf %lf",&n,&k);
    if(k!=0){
        r=n-k*floor(n/k);
        if(r<fabs(r-k)){
            a=(int)r;
        }else{
            a=(int)fabs(r-k);
        }
    }else{
        a=(int)n;
    }
    printf("%d",a);
    return 0;
}