#include<stdio.h>

int main(void)
{
   int a,b,c,k,x;
   x=0;
   scanf("%d%d%d%d", &a, &b, &c, &k);

   while(k>0){
      if(a>0)       {while((a>0)&&(k>0)) {a--; x++; k--;}}
      else if(b>0)  {while((b>0)&&(k>0)) {b--; k--;}}
      else if(c>0)  {while((c>0)&&(k>0)) {x--; c--; k--;}}
   }
   printf("%d\n",x);
   return 0;
}
