#include <stdio.h>
 
int main()
{
    int n;
 
    scanf("%d", &n);
 
    int a[n], i, sum = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
 
    int j;
    for (i = 0; i < n; i++) {
        for (j = i; j < n - i; j++) {
            if (a[j] > a[j + 1]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
 
    printf("%d %d %d\n", a[0], a[n], sum);
 
    return 0;
}