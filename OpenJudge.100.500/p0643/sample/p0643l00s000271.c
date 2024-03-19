#include <stdio.h>
int main ()
{
  int a,b,c;
  char s[100];
  
  scanf("%d %d",&a,&b);
  c=(a*b)%2;
  
  if(c==0)
  {
     printf("Even");
  }
  else
  {
         printf("Odd");
  }
 
  
  return 0;
}