#include<stdio.h>
#define min(lhs,rhs) ((rhs)<(lhs)?(rhs):(lhs))


int main(void){
    long long a,b,c,k;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
    if(a+b >= k)printf("%lld",min(a,k));
    else printf("%lld",a - (k-a-b));
}