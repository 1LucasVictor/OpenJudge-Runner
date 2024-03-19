#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(fabs(a+b)/2 != (int)fabs(a+b)/2)
        printf("IMPOSSIBLE\n");
    else
        printf("%d\n", (int)fabs(a+b)/2);
    return 0;
}