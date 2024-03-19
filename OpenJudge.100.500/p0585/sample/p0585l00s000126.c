
#include<stdio.h>
int main()
{
    int a,b,t,c,d,e;
    float m,x,y,z;
    scanf("%d%d%d",&a,&b,&t);
    c=(t/a);
    x=(t%a);
    y=x/a; 
    if(t<a)
    {
        c=0;
    }
   else if(y>0.5)
   {
       c=c+1;
   }
   else
   {
       c=c;
   }
   printf("%d\n",c*b);
    return 0;
}
