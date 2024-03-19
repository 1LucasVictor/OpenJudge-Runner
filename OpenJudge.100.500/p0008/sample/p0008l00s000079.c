#include<stdio.h>
const int MAX_V = 10000;
int main(void){
    int i,k,n;
    int prime[MAX_V+1],sum[MAX_V+1],cnt[MAX_V+1];
    for(i = 0; i < MAX_V+1; i ++ ){
        sum[i] = 0;
        cnt[i] = 0;
    }
    for(i = 2; i < MAX_V; i ++){
        prime[i] = 1;
        cnt[i] ++;
    }
    for(i = 2; i * i < MAX_V; i ++){
        if(prime[i]){
            for(k = 2 * i; k < MAX_V; k += i){
                prime[k] = 0;
                cnt[k] = 0;
            }
        }
    }
    while(scanf("%d",&n) != EOF){
        for(i = 2; i <= n; i ++){
                sum[i+1] = sum[i] + cnt[i];
        }
        printf("%d\n",sum[n+1]);
    }
    return 0;
}