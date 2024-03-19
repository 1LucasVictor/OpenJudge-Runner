#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    long int n,k;
    scanf("%ld%ld",&n,&k);
    if(n%k>=k/2)printf("%ld",k-n%k);
    else printf("%ld",n%k);
    return 0;
}