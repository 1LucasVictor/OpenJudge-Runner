#include<stdio.h>

int main(void)
{
   int x, y;

   scanf("%d%d",&x,&y);

   if((y%2!=0)||(x*2>y)||(x*4<y))
      printf("No\n");
   else
      printf("Yes\n");
   return 0;
}