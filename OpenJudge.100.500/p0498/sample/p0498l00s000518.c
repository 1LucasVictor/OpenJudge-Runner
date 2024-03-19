#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int ans = N / 2;
    if(N % 2 == 1) {
        ans ++;
    }
    printf("%d\n", ans);

    return 0;
}