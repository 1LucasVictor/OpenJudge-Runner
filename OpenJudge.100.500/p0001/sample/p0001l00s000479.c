#include<stdio.h>
int main()
{
    int a,b,x,y;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        x=0;
        y=a+b;
        while(y!=0)
        {
            y=y/10;
            x++;
        }

        printf("%d\n",x);
    }


    return 0;
}

