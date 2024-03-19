#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long n;
    scanf("%ld", &n);
    if(n%2==1)
    {
        printf("%ld", n / 2+1);
    }
    else
    {
        printf("%ld", n / 2);
    }
    
    return 0;
}