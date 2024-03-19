#include<stdio.h>
#include<math.h>
long int n,k;
int main(){
    scanf("%ld%ld",&n,&k);
    printf("%ld",n%k>abs(n%k-k)?abs(n%k-k):n%k);
    return 0;
}