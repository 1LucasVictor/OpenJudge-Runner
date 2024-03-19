#include<stdio.h>
int main()
{	
  int X,a,b,c,d;
  scanf("%d",&X);
 b = X / 500;
 c = X % 500;
 d = c / 5;
 a = b * 1000 + d * 5;
 printf("%d",a);
      return 0;
}