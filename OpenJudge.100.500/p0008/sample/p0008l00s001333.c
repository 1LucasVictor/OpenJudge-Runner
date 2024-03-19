#include <stdio.h>

const int MAX_V = 1000000;
int prime[MAX_V+1];

void init(){
    int i, k, v;
    for(i=2; i<=MAX_V; i++){
        prime[i] = 1;
    }
    for(i=2; i*i<=MAX_V; i++){
        if(prime[i]){
            for(k=2*i; k<=MAX_V; k+=i){
                prime[k]=0;
            }
        }
    }   
}

int isprime(int n){
    return prime[n];
}

int main(){
    init();
    int num;
    while(scanf("%d", &num) != EOF){
        int count=0;
        for(int i=2; i<=num; i++){
            if(isprime(i)==1)
                count++;
        }
    printf("%d\n", count);
    }
    return 0;
}