#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int a = n + n*n + n*n*n;
    
    printf("%d\n", a);

    return 0;
}