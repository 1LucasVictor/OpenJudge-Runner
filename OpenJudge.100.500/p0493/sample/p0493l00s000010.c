#include <stdio.h>
int main()
{
    int x,a=0,t=0;
    scanf("%d",&x);
    if(x<500) printf("%d\n",x-x%5);
    else
    {
        a=x/500;
        t=a*500+x-x%5;
        printf("%d\n",t);
    }
    return 0;
}
