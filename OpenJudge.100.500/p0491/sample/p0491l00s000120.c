#include <stdio.h>
int main(){
    long long int n,k;
    scanf("%lld%lld",&n,&k);
    if((k-n%k)>=n%k) printf("%lld",n%k);
    else printf("%lld",k-n%k);
}