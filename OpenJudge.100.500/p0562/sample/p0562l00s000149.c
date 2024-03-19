#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#define DEBUG

int main()
{
    int a, b;
    //read
    scanf("%d %d", &a, &b);

    //solve
    int ans = 1;
    int sum = a;
    while (true)
    {
        if(b == 1)
        {
            ans = 0;
            break;
        }
        if(sum >= b)
        {
            goto OUT;
        }
        if(sum < b)
        {
            sum += a - 1;
        }
        ans++;
    }
    
    //write
    OUT:
    printf("%d\n", ans);

    return 0;
}