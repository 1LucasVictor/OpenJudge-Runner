#include <stdio.h>

main(){

long long a;
long long b1, b2;
long long k;

scanf("%lld",&a);
scanf("%lld.%lld",&b1, &b2);

// printf("%d %d\n", b1, b2);

k=a*(100*b1+b2);
k /=  100;

printf("%lld",k);

}