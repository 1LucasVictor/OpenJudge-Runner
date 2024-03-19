#include <stdio.h>
int main(void){
    long long x;
    long long a;
    long long b;
    
    scanf("%lld %lld %lld", &x, &a, &b);
    
    if(a > b){
        printf("delicious");
    }else if(x < b - a){
        printf("dangerous");
    }else if(x >= b - a){
        printf("safe");
    }
    
    
}
