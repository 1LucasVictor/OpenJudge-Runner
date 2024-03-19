#include<stdio.h>
#include <stdlib.h>
#define rep( i, n ) for(((i) = 0); ((i) < (n)); ((i)++))

int main(void)
{
    long a,b;
    scanf("%ld %ld\n", &a, &b);

    if((a+b)%2 == 0)
    {
        printf("%ld\n", labs((a+b)/2));
    }
    else
    {
        printf("IMPOSSIBLE");
    }
    
    return 0;
}
