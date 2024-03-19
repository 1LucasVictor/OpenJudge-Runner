#include <stdio.h>
#include <math.h>

#define MAX_N 1000000


int solve(int n, int d, int x[], int y[]);


int main ()
{
    int n, d;
    int x[MAX_N];
    int y[MAX_N];
    
    scanf("%d %d", &n, &d);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
        scanf("%d", &y[i]);
    }

    printf("%d\n", solve(n, d, x, y));

    return 0;
}

int solve(int n, int d, int x[], int y[])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (sqrt((long)x[i] * x[i] + (long)y[i] * y[i]) <= (float)d)
        {
            count++;
        }
    }

    return count;
}
