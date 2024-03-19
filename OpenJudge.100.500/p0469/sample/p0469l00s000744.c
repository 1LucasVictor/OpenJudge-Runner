#include <stdio.h>
int main(void) {
    int k, a, b;
    scanf("%d", &k);
    scanf("%d %d", &a, &b);

    if (b / k > (a - 1) / k)printf("OK\n");
    else printf("NG\n");

    return 0;
}