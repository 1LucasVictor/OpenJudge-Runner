#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char buffer[256];
    int n, min=1000000, max=-1000000;
    long sum = 0;

    fgets(buffer, 7, stdin);
    sscanf(buffer, "%d", &n);
    int current=0, counter = 0;

    while (counter++ < n)
    {
        scanf("%d", &current);
        if (current < min) min = current;
        if (current > max) max = current;
        sum += (long)current;

    }

    printf("%d %d %ld\n", min, max, sum);

    return(0);
}
