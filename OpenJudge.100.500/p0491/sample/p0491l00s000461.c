#include <stdio.h>
long long min(long long a,long long b){
    if(a<b) return a;
    else return b;
}
int main(void){
    long long n,k;
    scanf("%lld%lld",&n,&k);
    printf("%lld",min(n%k,k-n%k));
    return 0;
}