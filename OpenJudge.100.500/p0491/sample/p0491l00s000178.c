#include<stdio.h>
#include<stdlib.h>

int main(void){
    long long int n,k;
    (void)scanf("%lld %lld",&n,&k);
    n=n%k;
    while(n>llabs(n-k)){
    n=llabs(n-k);
    }
    printf("%lld\n",n);
    return 0;
}