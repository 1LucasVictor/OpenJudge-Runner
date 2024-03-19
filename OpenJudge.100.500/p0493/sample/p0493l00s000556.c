#include<stdio.h>
int main()
{
 int X,h;
 scanf("%d",&X);
 int x,b,c;
 if(X>=500)
     {
         x=X%500;
         b=X/500;
         c=x/5;
         h=(b*1000)+(c*5);
         printf("%d\n",h);

    }
    else if(X==0)
    {
        printf("%d\n",X);
    }
    else
    {
        x=X/5;
        h=x*5;
        printf("%d\n",h);
    }

 }


