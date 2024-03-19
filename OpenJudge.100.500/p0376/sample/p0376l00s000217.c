#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int n;
    int a[100];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%s%d", i == 0 ? "" : " ", a[n - i - 1]);
    }
    printf("\n");

    return 0;
}
