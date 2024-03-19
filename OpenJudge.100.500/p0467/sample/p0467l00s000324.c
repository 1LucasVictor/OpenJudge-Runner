#include <stdio.h>
int main(void){
    long long int a, b, c, d;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);

    long long int sum = 0;

    if(d <= a){
        printf("%lld", d);
        return 0;
    } else if(d <= a + b){
        printf("%lld", a);
        return 0; 
    }else if(d <= a + b + c){
        sum = a + (d - a - b) * (-1);
        printf("%lld", sum);
    }
}