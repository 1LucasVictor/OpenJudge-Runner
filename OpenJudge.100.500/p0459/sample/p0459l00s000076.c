#include<stdio.h>
int main()
{
    int x,y,a,i,b=0;
    scanf("%d %d",&x,&y);
    if(4*x<y)
        printf("No");
    else
    {
        for(i=1;i<=x;i++)
        {
            a=i*2+(x-i)*4;
            if(a==y)
                b=1;
        }
        if(b==1)
            printf("Yes");
        else
            printf("No");
    }
    return 0;
}