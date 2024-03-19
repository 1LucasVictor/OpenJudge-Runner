#include <stdio.h>
#include <math.h>

int main()
{
    int d, n;
    
    scanf("%d %d", &d, &n);
    
    if(d==0) printf("%d", n);
    else printf("%d", (int)pow(100, d)*n);

    return 0;
}