#include <stdio.h>
int main(void){
    long x;
    long a;
    long b;
    
    scanf("%ld %ld %ld", &x, &a, &b);
    
    if(a > b){
        printf("delicious");
    }else if(x < b - a){
        printf("dangerous");
    }else if(x >= b - a){
        printf("safe");
    }
    
    
}
