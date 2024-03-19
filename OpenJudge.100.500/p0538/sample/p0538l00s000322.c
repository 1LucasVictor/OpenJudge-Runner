#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   scanf("%d%d",&a,&b);
   if(a<0||a>10||b<0||b>10)
    {
        printf("-1\n");
    }
    else
    {
        c=a*b;
        printf("%d",c);
    }
    return 0;
}
