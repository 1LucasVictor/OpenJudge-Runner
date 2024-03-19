#include <stdio.h>
int main(void){
    long long a,b,g,h,t;
    while(scanf("%lld %lld",&a,&b) != EOF){
        g = a; h = b;
        while(h > 0){
            t = h;
            h = g%h;
            g = t;
        }
        printf("%lld %lld\n",g,(a*b)/g);
    }
    return 0;
}