#include <stdio.h>
#define MAX_V 1000000
int prime[MAX_V+1] = {0};
int primeSum[MAX_V+2] = {0};
int main(){
    int i, k, n;

    for(i = 2; i <= MAX_V; i++){
        prime[i] = 1;
    }
    for(i = 2; i * i <= MAX_V; i++){
        if(prime[i]){
            for(k = 2*i;k <= MAX_V; k += i){
                prime[k] = 0;
            }
        }
    }

    for(i = 0; i < MAX_V + 2; i++){
        primeSum[i] = primeSum[i-1] + prime[i];
    }

    while(scanf("%d", &n) != EOF){
        printf("%d\n",primeSum[n]);
    }
    return 0;
}