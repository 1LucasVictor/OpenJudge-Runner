#include <stdio.h>

int main(void) {
    int K, A, B, b, i;
    scanf("%d%d%d", &K, &A, &B);
    b=0;
    for (i=A; i<=B; i++) {
        if (i%K==0) {
            b=1;
            break;
        }
    }
    if (b) printf("OK");
    else printf("NG");
    return 0;
}
