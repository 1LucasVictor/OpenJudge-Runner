#include <stdio.h>
long long min(long long n,long long m){
    if(n<m) return n;
    else return m;
}
int main(void){
    long long a,b,c,k;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
    if(k<=a) printf("%lld",k);
    else if(k<=a+b) printf("%lld",a);
    else printf("%lld",a+min((k-a-b),c)*-1);
}