#include<stdio.h>
int main (void){
    double B;
    unsigned long long int A,ans;
    scanf("%lld",&A);
    scanf("%lf",&B);
    ans = (A*(long long int)(100*B))/100;
    printf("%lld",ans);
    return 0;
}