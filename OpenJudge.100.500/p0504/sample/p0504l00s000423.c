#include<stdio.h>
int main()
{
    int A,H,x,y;
    scanf("%d%d",&H,&A);
    if(H%A==0)
    {
        x=H/A;
        printf("%d",x);
    }
        else
        {
            y=(H/A)+1;
            printf("%d",y);
        }
    return 0;


}

