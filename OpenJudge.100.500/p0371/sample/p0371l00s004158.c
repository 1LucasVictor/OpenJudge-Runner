#include <stdio.h>
 
int main()
{
    int n, a[10000], i, max, min;
    long sum;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = a[0];
    min = a[0];
    sum = 0;

    for (i = 0; i < n; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
        sum += a[i];
    }

    printf("%d %d %d\n", min, max, sum);
    
    return 0;
}
    
    