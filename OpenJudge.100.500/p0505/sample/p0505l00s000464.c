#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void) {
    int h, n;
    scanf("%d%d", &h, &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int sum = 0;
    for (int i = 0; i < n; i++) sum += a[i];

    if (h <= sum) printf("Yes\n");
    else printf("No\n");

    return 0;
}
