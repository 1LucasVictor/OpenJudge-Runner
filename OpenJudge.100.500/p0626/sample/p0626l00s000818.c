#include<stdio.h>
#include<math.h>
int main()
{
    int d, n;
    scanf("%d %d", &d, &n);
    if (n == 100)
        n++;
    n *= pow(100, d);
    printf("%d\n", n);
    return 0;
}