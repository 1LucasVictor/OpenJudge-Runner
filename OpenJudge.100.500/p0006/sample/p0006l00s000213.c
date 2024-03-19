#include <stdio.h>

int main(void)
{
    int n;
    int m = 100000;
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        m *= 1.05;
        m = (m % 1000 == 0 ? m : (m - m % 1000) + 1000);
    }

    printf("%d\n", m);

    return (0);
}