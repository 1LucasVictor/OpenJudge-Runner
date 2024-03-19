#include <stdio.h>

int main(void){
    long long int A,B,C;

    scanf("%lld %lld.%lld",&A,&B,&C);

    printf("%lld\n",A*(B*100+C)/100);

    return 0;
}