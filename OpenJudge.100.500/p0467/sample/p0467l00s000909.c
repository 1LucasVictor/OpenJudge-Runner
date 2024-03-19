#include<stdio.h>


int main(void){
    register int i,j;
    long a,b,c,k;
    scanf("%ld%ld%ld%ld",&a,&b,&c,&k);
    if(a+b >= k)printf("%ld",a);
    else printf("%ld",a - (k-a-b));
}