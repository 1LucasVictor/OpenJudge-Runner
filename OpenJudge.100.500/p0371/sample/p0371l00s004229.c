#include <stdio.h>

int main()
{
    int n, m, i;
    int min = 1000001, max = -1000001, sum = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &m);

        if (m < min) min = m;
        if (m > max) max = m;

        sum += m;
    }
    printf("%d %d %d\n", min, max, sum);

    return 0;
}