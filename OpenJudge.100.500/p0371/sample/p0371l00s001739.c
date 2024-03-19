#include <stdio.h>

int main(void) 
{
    int n,a, i, min, max = -1000000;
    long goukei = 0;

    scanf("%d", &a);
    scanf("%d", &n);
    
    min = goukei=n;
    
    for (i = 1;i<a ;i++) 
    {
        scanf("%d", &n);
        goukei += n;
        if (min > n)
        {
            min = n;
        }
        else
        {
            if (max < n)
            {
                max = n;
            }
        }
    }
    printf("%d %d %ld\n", min, max, goukei);

    return 0;
}
