#include <stdio.h>

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    if((n1+n2)%2 != 0)
        printf("IMPOSSIBLE");
    else
        printf("%d", (n1+n2)/2);
    return 0;

}
