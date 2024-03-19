#include <stdio.h>

int main(void){

    int N = 0;
    
    scanf("%d", &N);

    int A[N];
    int count[200000] = {0};

    for (int i = 0; i < N - 1; i++){
        scanf("%d", &A[i]);    
        count[A[i] - 1] += 1;
    }

    for (int j = 0; j < N; j++){
        printf("%d\n", count[j]);
    }

    return 0;
}