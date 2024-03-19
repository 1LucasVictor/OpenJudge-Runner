#include <stdio.h>

int main(void){
    long a,b,i=2;
    while(scanf("%ld%ld",&a,&b)!=EOF){
        i=a;
        while(1){
            if(a%i==0&&b%i==0) break;
            i--;
        }
        printf("%ld %ld\n",i,a*b/i);
    }
    return 0;
}