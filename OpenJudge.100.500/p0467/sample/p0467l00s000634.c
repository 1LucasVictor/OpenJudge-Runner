#include <stdio.h>

int main(){
    long int a,b,c,k;
    
    scanf("%ld %ld %ld %ld", &a,&b,&c,&k);

    if(a >= k || a + b >= k){
        printf("%ld", a);
    }else{
        printf("%ld",  a+a-k+b);
    }
    }