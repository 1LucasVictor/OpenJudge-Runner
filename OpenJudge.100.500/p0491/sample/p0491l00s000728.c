#include<stdio.h>
#include<stdlib.h>

int main(void){
    int N, K;
    int n, m;
    scanf("%d %d",&N, &K);
    n = N%K;
    m = K-n;
    if(n < m){
        printf("%d\n",n);
    }
    else if(m < n){
        printf("%d\n",m);
    }
    return 0;
}