#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>

int main()
{
    long long int h, i, n, a, t = 0;    
    scanf("%lld %lld", &h, &n);
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &a);
        t += a;
    }
    if(t >= h)
        printf("Yes");
    else
        printf("No");
	return 0;
}

