#include <stdio.h>

int main(){
    int i, k, n;
    const int MAX_V = 999999;
    int prime[MAX_V+1];
    int sum[MAX_V+1];
    for(i = 2; i <= MAX_V; i++) prime[i] = 1;
    for(i = 2; i <= MAX_V; i++){
        if(prime[i]){
            for(k = 2 * i; k <= MAX_V; k += i){
                prime[k] = 0;
            }
        }
    }
    sum[1]=0;
    for(i = 2; i <= MAX_V; i++) sum[i] = sum[i-1]+prime[i];
    while(scanf("%d", &n) != EOF) printf("%d\n",sum[n]);
    return 0;
}