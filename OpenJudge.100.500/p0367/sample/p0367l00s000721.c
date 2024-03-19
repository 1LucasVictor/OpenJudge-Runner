#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int a, b, c;
    int d;
    int n;
 
    scanf("%d%d%d", &a, &b, &c);
    n = 0;
    for (d = a; d <= b; d++) {
        if (c % d == 0) n++;
    }
    printf("%d\n", n);
    return 0;
}
