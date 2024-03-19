#include <stdio.h>

#define MAX 45

int res[MAX];


main()
{
    int n;        
    int i;
    scanf("%d", &n);

    res[0] = 1;
    res[1] = 1;

    for (i = 2; i <= n; i++)
        res[i] = res[i - 1] + res[i - 2];

    printf("%d\n", res[n]);

    return 0;

}