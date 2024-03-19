#include<stdio.h>

int main(void){
    long long int a,b,c,d,max,min;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    if(b <= c){
        printf("0\n");
    return 0;
    }
    if(a > c){
        min = a;
    }else{
        min = c;
    }
    if(b < d){
        max = b;
    }else{
        max = d;
    }
    printf("%lld\n",(max-min));
    return 0;
}
