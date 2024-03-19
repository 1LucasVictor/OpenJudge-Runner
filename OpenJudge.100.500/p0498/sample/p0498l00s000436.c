#include <stdio.h>

int main (void)
{
  int N=0;
  
  scanf("%d",&N);
 
  if(N%2==0)
  {
    printf("%d",N/2);
  }
  
   if(N%2==1)
  {
     N=N/2+1;
    printf("%d",N);
  }
  
  return 0;
}