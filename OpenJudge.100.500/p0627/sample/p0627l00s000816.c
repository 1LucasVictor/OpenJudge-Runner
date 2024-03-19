#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int a,b,max;
    while(~scanf("%d%d",&a,&b))
    {
        if(a+b>a-b)
            max=a+b;
        else
            max=a-b;
        if(max<a*b)
            max=a*b;
        printf("%d\n",max);
    }
        return 0;
}
