#include<stdio.h>
const int MAX_V = 999999;
int main(){
        int prime[MAX_V+1];
        int sum[MAX_V+1];
        int i, j, n;
        for(i = 2; i <= MAX_V; i++){
                prime[i] = 1;
        }
        for(i = 2; i * i <= MAX_V; i++){
                if(prime[i]){
                        for(j = 2 * i; j <= MAX_V; j += i){
                                prime[j] = 0;
                        }
                }
        }
        sum[0] = 0;
        prime[0] = 0;
        prime[1] = 0;
        for(i = 0; i < MAX_V; i++){
                sum[i+1] = sum[i] + prime[i];
        }
        while(scanf("%d",&n)!=EOF){
                printf("%d\n", sum[n + 1]);
        }
        return 0;
}