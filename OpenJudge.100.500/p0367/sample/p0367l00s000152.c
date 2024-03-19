#include<stdio.h>
int main()
{
int a,b,c,d,e;
scanf("%d %d %d",&a,&b,&c);
for(e=0;a<=b;a++)
   {
   d=c%a;
   if(d==0)
      {
      e=e+1;
      }
   }
printf("%d\n",e);
return 0;
}