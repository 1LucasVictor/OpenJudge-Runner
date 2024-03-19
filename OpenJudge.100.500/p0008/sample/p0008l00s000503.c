#include<stdio.h>
int main()
{
    int x,y,p=0,z;

    while(scanf("%d",&x)!= EOF)
    {
        while(x>=2)
        {
        z=0;
        for(y=2;y<=x/2;y++)
        {
        if(x%y==0)
            z=1;
        }
        if(z==0)
            p+=1;
        x--;
        }
        printf("%d\n",p);
        p=0;
    }
    return 0;
}

