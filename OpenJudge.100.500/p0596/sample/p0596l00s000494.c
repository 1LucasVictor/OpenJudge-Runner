#include<stdio.h>

int main(void)
{
   int i,x,y,z;
   char s[10000];

   scanf("%s",s);

   x=0; y=0; z=0;
   for(i=0;s[i]=='1'||s[i]=='0';i++){
      if(s[i]=='0')
        x=x+1;
      else if(s[i]=='1')
        y=y+1;
   }

   if(x>y) z=y*2;
   else if(y>x) z=x*2;
   else if(x=y) z=x*2;

   printf("%d\n",z);

   return 0;
}