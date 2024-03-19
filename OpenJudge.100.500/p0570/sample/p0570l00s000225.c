#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long int a,b,x;

    scanf("%llu %llu",&a,&b);

    x=(a+b)/2;

    if(abs(a-x)==abs(b-x))
        printf("%llu",x);
    else
        printf("IMPOSSIBLE");
    
    return 0;
}