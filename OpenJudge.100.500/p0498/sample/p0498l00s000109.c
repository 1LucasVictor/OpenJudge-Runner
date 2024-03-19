#include <stdio.h>

int main()
{
    int n ,r,a;
    scanf("%d", &n);
    
    r = n / 2;
    a = (r + (n % 2));
    
    printf("%d\n", a);
    return 0;
}