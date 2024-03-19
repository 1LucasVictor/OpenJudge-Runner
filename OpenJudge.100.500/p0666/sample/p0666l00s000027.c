#include <stdio.h>
int main(void)
{
    long x,a,b;
    scanf("%ld %ld %ld",&x,&a,&b);
    if(a>=b)
    {
        printf("delicious");
    }
    else if(a<b && a+x>=b)
    {
        printf("safe");
    }
    else
    {
        printf("dangerous");
    }
}
