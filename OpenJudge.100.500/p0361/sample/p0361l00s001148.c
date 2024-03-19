#include<stdio.h>

int main(void)
{
   int a;
   int b;
   int c;
   
   
   scanf("%d", &a);
   b = (a-(a%60))/60;
   c = (b-(b%60))/60;
      
      printf("%d:%d:%d\n", c,b%60,a%60);
	
   return 0;
}
