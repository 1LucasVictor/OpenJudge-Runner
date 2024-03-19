#include<stdio.h>
int main(void){
    int n;
    long long a,b,c,d,e;
    c=-1000000;
    d=1000000;
    e=0;
    scanf("%d",&n);
    for(a=0;a<n;a++){
        scanf("%lld",&b);
        if(b>c){
            c=b;
        }
        if(b<d){
            d=b;
        }
        e=e+b;
    }
    printf("%lld %lld %lld\n",d,c,e);
    return 0;
}