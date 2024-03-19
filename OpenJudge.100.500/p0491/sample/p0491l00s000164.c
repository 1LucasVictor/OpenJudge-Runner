#include<stdio.h>

int main(){
    long long n,k;
    scanf("%lld %lld",&n, &k);

    long long tmp = n%k;
    if(tmp <= (k-tmp))printf("%lld\n",tmp);
    else printf("%lld\n",(k-tmp));
    
    return 0;
}
