#include <stdio.h>
int main(void){
    long int n,k;
    scanf("%ld %ld",&n,&k);
    n = n%k;
    if(n%k > k-n%k) n = k-n%k;
    printf("%d",n);
    return 0;
}
