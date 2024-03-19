#include<stdio.h>
const int MAX_V = 1000000;
int main() {
    int i,k,v,c[MAX_V+1];
    int prime[MAX_V+1];
    for(i = 2; i < MAX_V; i++) {
        prime[i] = 1;
    }
    for(i = 2; i*i < MAX_V; i++) {
        if(prime[i]) {
            for(k = 2 * i; k <= MAX_V; k += i) {
                prime[k] = 0;
            }
        }
    }
     while(scanf("%d",&v)!=EOF){
        for(i=2;i<=v;i++){
            int isprime=prime[i];
            c[i+1]=c[i]+isprime;
        }
        printf("%d\n",c[v+1]);
    }
    return 0;
}