#include <stdio.h>

int main()
{
	int A,B;
  scanf("%d",&A);
  scanf("%d",&B);
  if((A>=1 && A<=9) || (B>=1 && B<=9))
  {
  printf("%d",A*B);
  }
  else printf("%d",-1);
  
  
}