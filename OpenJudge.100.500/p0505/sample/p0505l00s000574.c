#include <stdio.h>

int main(void) {
    int i;
    int sum = 0;
    int h, n;
    int a[100000];

    scanf("%d%d", &h, &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
        sum += a[i];

    if (h <= sum)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
