#include <stdio.h>

int main(){
    long long int a,b,c,k;
    
    scanf("%lld %lld %lld %lld", &a,&b,&c,&k);

    if(a >= k || a + b >= k){
        printf("%lld", a);
    }else{
        printf("%lld",  a+a-k+b);
    }
    }