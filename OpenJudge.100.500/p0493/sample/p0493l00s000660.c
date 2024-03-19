#include<stdio.h>

typedef long long ll;

int main(void){
    ll X=0;

    scanf("%lld", &X);

    ll happy=0;

    happy += (X/500)*1000;
    X = X%500;
    happy += (X/5)*5;

    printf("%lld", happy);
    
    return 0;
}