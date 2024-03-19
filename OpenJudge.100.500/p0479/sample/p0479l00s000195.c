#include <stdio.h>

void caluc(int buf[], int a[], int n)
{
    int i;

    for (i = 1; i < n; i++) {
        a[buf[i]]++;
    }
}

int main()
{
    int n, i, j, buka;
    int buf[200000];
    int a[200000] = {0};

    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        scanf("%d", &buf[i]);
    }
    caluc(buf, a, n);
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i+1]);
    }

    return 0;
}