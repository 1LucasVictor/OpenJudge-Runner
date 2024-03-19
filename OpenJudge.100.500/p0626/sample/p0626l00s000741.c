#include<stdio.h>

int main(void)
{
   int a,b,c,i;

   scanf("%d%d",&a,&b);

   if(a==0)
      c=1;

   if(a==1)
      c=100;

   if(a==2)
      c=10000;
   
   if(b==100)
      printf("%d\n",c*(b+1));
   else
      printf("%d\n",c*b);
   return 0;
}
