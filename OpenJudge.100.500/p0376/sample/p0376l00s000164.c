#include <stdio.h>

int main()
{
    int n, x, y, z;
    int temp;
    int v[10000];

    scanf("%d", &n);

    for (x = 0; x < n; x++){
        scanf("%d", &v[x]);
    }

    for (y = 0; y < n / 2; y++){
        temp = v[y];
        v[y] = v[n - y - 1];
        v[n - y - 1] = temp;
    }

    for (z = 0; z < n - 1; z++){
        printf("%d ", v[z]);
    }
    printf("%d\n", v[n - 1]);

    return 0;
}