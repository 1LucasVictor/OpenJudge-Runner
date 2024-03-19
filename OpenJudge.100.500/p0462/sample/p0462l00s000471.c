#include <stdio.h>
int main(void){
    // Your code here!
    long long int a;
    float b;
    scanf("%lld %f", &a,&b);
    int c=b*100;
    printf("%lld",(long long int)(a*c)/100);
    return 0;
}