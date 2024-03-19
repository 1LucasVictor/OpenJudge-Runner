#include <stdio.h>
int main()
{
    int a,b;
    int c,d;
    int sum;
    int max;
    scanf("%d%d%d%d",&a, &b, &c, &d);
    if(a>=c)
    {
        if(b>=d)
            sum = d-a;
        else
            sum = b-a;
    }
    else
    {
        if(b>=d)
            sum = d-c;
        else
            sum = b-c;
    }
    if(sum>=0)
        max = sum;
    else
        max = 0;
    printf("%d\n",max);
    return 0;
}