#include<stdio.h>
#include<math.h>
long long int n,k;
int main(){
    scanf("%lld%lld",&n,&k);
    printf("%lld",n%k>abs(n%k-k)?abs(n%k-k):n%k);
    return 0;
}