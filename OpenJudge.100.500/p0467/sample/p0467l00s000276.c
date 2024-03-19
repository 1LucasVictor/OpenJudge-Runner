#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>

int main(void)
{
    int a, b, c, k;
    int cnt = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &k);

    while (0 != a && 0 != k) {
        cnt++;
        k--;
        a--;
    }
    while (0 != k && 0 != b) {
        k--;
        b--;
    }
    while (0 != k && 0 != c) {
        cnt--;
        k--;
        c--;
    }
    printf("%d\n", cnt);

    return 0;
}
