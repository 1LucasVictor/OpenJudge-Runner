#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

int pw(int n) {
    if(n==0) {
        return 1;
    }
    int i;
    int ans = 1;
    for(i=0; i<n; i++) {
        ans *= 100;
    }
    return ans;
}

int main(void){
    int D, N;
    scanf("%d %d", &D, &N);
    printf("%d\n", pw(D)*N);
    return 0;
}