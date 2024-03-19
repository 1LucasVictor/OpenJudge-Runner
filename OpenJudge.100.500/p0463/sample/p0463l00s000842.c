#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define MOD 998244353

int main(){
    ll n;
    scanf("%lld", &n);

    switch (n%10){
    case 0: case 1: case 6: case 8:
        printf("pon\n");
        return 0;
    case 3:
        printf("bon\n");
        return 0;
    default:
        printf("hon\n");
        return 0;
    }

    return 0;
}