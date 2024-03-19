#include <stdio.h>

int main (void) {
    int N;

    scanf("%d", &N);

    int A[N];
    int B[N];

    for (int i = 0; i < N; i++) {
        B[i] = 0;
    }
    A[0] = 0;

    for (int i = 1; i < N; i++) {
        int j = 1;
        scanf("%d", &A[i]);
        
        while (j != A[i]) {
            j++;
        }
        B[j - 1]++;
    }

    for (int i = 0; i < N; i++){
        printf ("%d\n", B[i]);
    }
    
    return 0;
}