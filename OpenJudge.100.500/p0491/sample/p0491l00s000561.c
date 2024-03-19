#include<stdio.h>
#include<stdlib.h>

int main(void){
    int N, K;
    scanf("%d %d",&N, &K);
    while(N > abs(K - N)){
        N = abs(K - N);
    }
    printf("%d\n",N);
    return 0;
}