#include<stdio.h>
 
int main(void)
{
   int i, a, b, k;
  
   scanf("%d", &a);
   scanf("%d", &b);
 
   if( a%2 != b%2 ) printf("impossible");
   else             printf("%d", (a+b)/2) ;
  
   return 0;
}