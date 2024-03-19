#include<stdio.h>

int main(void)
{
   int a,b,c,k,x;
   x=0;
   scanf("%d%d%d%d", &a, &b, &c, &k);

   while((k>0)&&(c>0)){
      if(a>0)  {x++; a--; k--;}
      else if(b>0)  {b--; k--;}
      else if(c>0)  {x--; c--; k--;}
   }
   printf("%d\n",x);
   return 0;
}
