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
        if(sum >= b)
        {
            break;
        }
        else
        {
            sum += a - 1;
        }
        ans++;
    }
    
    //write
    printf("%d\n", ans);

    return 0;
}