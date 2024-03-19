#include <stdio.h>

int main(void) {
    int H, N, A, S, i;
    scanf("%d%d", &H, &N);
    S=0;
    for (i=0; i<N; i++) {
        scanf("%d", &A);
        S+=A;
    }
    if (S>=H) printf("Yes");
    else printf("No");
    return 0;
}