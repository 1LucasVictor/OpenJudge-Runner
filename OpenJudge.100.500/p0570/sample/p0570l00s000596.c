#include<stdio.h>

int main()
{

    long int a,b;

    scanf("%ld %ld",&a,&b);
    long int t;

    if(a>b)
    {
        t = a;a=b;b=t;
    }

    if((a+b)%2 == 1)
    {
        printf("IMPOSSIBLE\n");
    }
    else 
    {
        t = b-a;
        t = t/2;
        printf("%ld",b-t);
    }
    return 0;
}