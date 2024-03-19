#include<stdio.h>
int main()
{
    int x,y,a,b;
    scanf("%d %d",&x,&y);

    if(y%2!=0)
        printf("No\n");
    else if(x==1)
    {
        if(y==2 || y==4)
            printf("Yes\n");
        else
            printf("No\n");
    }

    else
    {
        b = (y/2)-x;
        a = x - b;
        if(a>0 && b>0 && (2*a+4*b==y))
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
