#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    long long i,n,d,x[200002]={},y[200002]={},count=0;
    scanf("%lld%lld",&n,&d);
    for(i=0;i<n;i++){
        scanf("%lld%lld",&x[i],&y[i]);
        if(d>=sqrt(x[i]*x[i]+y[i]*y[i])) count++;
    }
    printf("%lld",count);

    return 0;
}
