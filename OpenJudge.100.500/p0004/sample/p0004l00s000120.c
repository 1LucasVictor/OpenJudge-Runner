#include<stdio.h>

int main(void){
long long int a,b;
long long int m,n;
long long int tmp;
    while(scanf("%lld %lld",&a,&b)!=EOF){
        m=(a>b)?a:b;
        n=(a>b)?b:a;
        while(m%n!=0){
            tmp=m%n;
            m=n;
            n=tmp;
        }
        printf("%lld %lld",n,a*b/n);
    }
    return 0;
}