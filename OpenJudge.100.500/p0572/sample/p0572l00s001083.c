#include <stdio.h>

int main(void){
    long long int l,r,mod,min;
    min = 2000000000;
    scanf("%lld %lld",&l,&r);
    for(int i = l; i < r; i++){
        for(int j = i+1; j <= r; j++){
            mod = (i*j)%2019;
            if(min >= mod){
                min = mod;
            }
        }
    }
    printf("%lld\n",min);
    return 0;
}
