#include<stdio.h>

int main(void){
long int a,b;
long int m,n;
long int tmp;
    while(scanf("%ld %ld",&a,&b)!=EOF){
        m=(a>b)?a:b;
        n=(a>b)?b:a;
        while(m%n!=0){
            tmp=m%n;
            m=n;
            n=tmp;
        }
        printf("%ld %ld",n,a*b/n);
    }
    return 0;
}