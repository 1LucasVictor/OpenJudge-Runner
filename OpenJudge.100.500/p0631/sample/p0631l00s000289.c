#include<stdio.h>
int main (void)
{
   int a,b,x;

   if(scanf("%d%d%d",&a,&b,&x) < 3){
    printf("error!\n");
    return 1;
   }

   if((a+b<x)||(a>=x))
    printf("NO\n");

   else printf("YES\n");

   return 0;
}
