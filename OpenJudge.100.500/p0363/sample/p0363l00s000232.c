#include<stdio.h>
int main(void)
{
      int a,b,c,d;
      
      scanf("%d",&a);
      scanf("%d",&b);
      scanf("%d",&c);
    
if(a>=b)
{
d=a;
a=b;
b=d;
}
if(b>=c)
{
d=b;
b=c;
c=d;
}
if(a>=b)
{d=a;
a=b;
b=d; }

printf("%d %d %d\n",a,b,c);
return(0);
    
}
