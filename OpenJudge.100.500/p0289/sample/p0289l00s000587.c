#include<stdio.h>

int main()
{
    int x,y,z;
    scanf("%d%d",&x,&y);

    if(x<y)
    {
        z=x;
        x=y;
        y=z;
    }
    while(z=x%y)
    {
        x=y;
        y=z;
    }
    printf("%d\n",y);
}


