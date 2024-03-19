#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int A[N], i;
    for(i=0; i<N; i++) {
        scanf("%d", &A[i]);
    }
    for(i=0; i<N; i++) {
        if(A[i] % 2 == 0 && (A[i] % 3 != 0 && A[i] % 5 != 0)) {
            printf("DENIED\n");
            return 0;
        }
        if(A[i] % 2 == 0 && (A[i] % 3 == 0 || A[i] % 5 == 0)) continue;
    }
    printf("APPROVED\n");
    return 0;
}
