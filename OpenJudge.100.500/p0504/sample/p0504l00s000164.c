#include<stdio.h>
int main()
{
    int a,b,x,y,z,i;
    z=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<=10000;i++)
    {
        x=a-b;
        if(x<=0)
        {
                printf("%d\n",i);
                break;
        }
      a=x;
    }



    return 0;
}
