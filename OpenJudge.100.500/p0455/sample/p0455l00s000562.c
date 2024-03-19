#include <stdio.h>

int main()
{
    int a;
    int value = 0;
    scanf("%d", &a);
    value = (a + a*a + a*a*a);
    
    printf("%d\n", value);
}
