#include<stdio.h>
int main(void){
    const int MAX_V = 10000;
    int i,k,n;
    int prime[MAX_V+1] = {0},sum[MAX_V+1] = {0};
    for(i = 2; i < MAX_V; i ++){
        prime[i] = 1;
    }
    for(i = 2; i * i < MAX_V; i ++){
        if(prime[i]){
            for(k = 2 * i; k < MAX_V; k += i){
                prime[k] = 0;
            }
        }
    }
    for(i = 2; i < MAX_V; i ++){
        sum[i+1] = sum[i] + prime[i];
    }
    while(scanf("%d",&n) != EOF){
        printf("%d\n",sum[n+1]);
    }
    return 0;
}