#include<stdio.h>


int main(){
    long long a,b,x;
    scanf("%lld %lld",&a,&b);
    x=a%b;
    if(x<b-x)      printf("%lld",x);
    else    printf("%lld",b-x);
    b=x;
    return 0;
}