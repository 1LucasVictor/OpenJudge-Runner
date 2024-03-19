#include<stdio.h>
int main()
{
    int x,y,p,z;

    while(scanf("%d",&x)!= EOF)
    {
        p=0;
        while(x>=2)
        {
        z=0;
        for(y=2;y<=x/2;y++)
        {
        if(x%y==0)
        {
            z=1;
            break;
        }
        }
        if(z==0)
            p+=1;
        x--;
        }
        printf("%d\n",p);
    }
    return 0;
}
