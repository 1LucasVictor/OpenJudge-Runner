#include<stdio.h>

int main()

{
    long long int x, a, b,c ;

    scanf("%lld", &x) ;
    a=x/500 ;
    c=x%500 ;
    b=c/5 ;

    printf("%lld\n", (a*1000)+(b*5)) ;

    return 0;

}