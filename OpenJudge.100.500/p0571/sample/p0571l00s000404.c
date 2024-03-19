#include<stdio.h>
int main()
{
    int N,a,b,x,y;
    scanf("%d %d %d",&N,&a,&b);
    x=N*a;
    if(x<b)
    {
        printf("%d\n",x);
    }
    else
    {
        printf("%d\n",b);
    }
    return 0;
}
