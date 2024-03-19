#include <stdio.h>
#include <float.h>

int main()
{
    int i;
    long int n, a;
    long int sum = 0;
    long int num[200000] = {};
    scanf("%ld", &n);

    for(i=1; i<n; i++)
    {
        scanf("%ld", &a);
        num[a-1]++;
    };
    for(i=0; i<n; i++)
    {
        printf("%ld\n", num[i]);
    }

    return 0;
}

