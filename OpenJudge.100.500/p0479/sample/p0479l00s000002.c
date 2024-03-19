#include <stdio.h>

int main(){
    int N;
    int A[1000000];
    int Sub[1000000] = {};
    
    scanf("%d", &N);

    for(int i = 1; i <= N; i++){
        scanf("%d", &A[i]);
        Sub[A[i]]++;
    }
    for(int j = 1; j <= N; j++){
        printf("%d\n", Sub[j]);
    }
    }