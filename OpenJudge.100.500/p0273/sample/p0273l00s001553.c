#include<stdio.h>

int main(){
    int N;
    int i, j, k;
    int F[50];

    scanf("%d", &N);
    F[0] = 1;
    F[1] = 1;
    for(i=2; i<=N; i++){
        F[i] = F[i-1] + F[i-2];
    }

    printf("%d\n", F[i-1]);

    return 0;
}
