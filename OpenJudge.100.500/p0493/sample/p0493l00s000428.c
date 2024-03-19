#include<stdio.h>
int main()
{
    long points=0;
    long x,i;
    scanf("%ld",&x);
    if(x>500)
    {
        i=x/500;
        points=points+(i*1000);
        x=x-(i*500);
    }
    if(x<500)
    {
        points=points+((x/5)*5);
    }
    printf("%ld",points);
    return 0;
}
