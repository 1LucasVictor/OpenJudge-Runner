#include <stdio.h>

int main(void)
{
    int h, n;
    int a[n];
    int sum = 0;

    scanf("%d %d", &h, &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }

    if (sum >= h)
        printf("Yes");
    else
        printf("No");

    return 0;

}