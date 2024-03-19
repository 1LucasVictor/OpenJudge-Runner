#include <stdio.h>
long long min(long long n,long long m){
    if(n<m) return n;
    else return m;
}
int main(void){
    long long n,k;
    scanf("%lld%lld",&n,&k);
    printf("%lld",min(n%k,k-n%k));
    return 0;
}