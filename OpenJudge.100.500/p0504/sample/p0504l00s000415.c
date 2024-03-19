#include <stdio.h>

int main(void)
{
    int H, A;
    int ans;

    scanf("%d %d", &H, &A);

    if ((H % A) != 0) {
        ans = (H / A) + 1;
    } else {
        ans = H / A;
    }

    printf("%d", ans);

    return 0;
}