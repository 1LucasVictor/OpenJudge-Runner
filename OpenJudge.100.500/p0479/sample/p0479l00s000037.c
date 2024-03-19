#include <stdio.h>

int main(){
    int N, buf;
    scanf("%d", &N);
    int A[300000] = {};
    for(int i=0; i<N-1; i++){
        scanf("%d", &buf);
        A[buf]++;
    }
    for(int i=1; i<=N; i++){
        printf("%d\n", A[i]);
    }
    return 0;
}