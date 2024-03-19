#include <stdio.h>

void bubble_sort(int a[], int n)
{
    int i, j, tmp;

    for (i = n-1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if(a[j] > a[j+1]) {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

int main()
{
    int n, i, j, buka;
    int a[200000] = {0};

    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        scanf("%d", &a[i]);
    }
    bubble_sort(a, n);
    j = 1;
    for (i = 0; i < n; i++) {
        buka = 0;
        while (a[j] == i+1) {
            buka++;
            j++;
        }
        printf("%d\n", buka);
    }

    return 0;
}