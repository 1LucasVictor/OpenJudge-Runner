#include<stdio.h>
long gcd(long,long);

int main(void){
    long a,b,gc;
    while(EOF!=scanf("%ld %ld",&a,&b)){
        gc=gcd(a,b);
        printf("%ld %ld\n",gc,a/gc*b);
    }
    return 0;
}
long gcd(long x,long y){
    long box=x;
    if(x<y){
        x=y;
        y=box;
    }
    do{
        x%=y;
        box=x;
        x=y;
        y=box;
    }while(0!=y);
    return x;
}