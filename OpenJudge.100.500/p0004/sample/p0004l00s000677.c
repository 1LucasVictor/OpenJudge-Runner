#include <stdio.h>

int main(void){
    long long a,b,i=2;
    while(scanf("%lld %lld ",&a,&b)!=EOF){
        i=a;
        while(1){
            if(a%i==0&&b%i==0) break;
            i--;
        }
        printf("%lld %lld\n",i,a*b/i);
    }
    return 0;
}