#include <stdio.h>

int primes[1000000];

void Sieve(){
    for(int i= 2; i < 1000000; i++){
        primes[i] = 1;
    }
    primes[1] = 0;    
    for(int i = 2; i < 1000; i++){
        if(primes[i] == 1)
            for(int j=i; j*i < 1000000;j++){
                primes[j*i] = 0;
            }
    }     
}

int IsPrime(int x){
    return primes[x];
}

int main(void){
    Sieve();
    int n, c;
    while(scanf("%d", &n)!= EOF){
        c = 0;
        for(int i = 2; i <= n; i++){
        if(IsPrime(i)==1)
            c++;
        }
        printf("%d\n", c);
    }
    return 0;
    
    
}

