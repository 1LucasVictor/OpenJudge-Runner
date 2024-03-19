#include<stdio.h>
#include <math.h>
#include <stdlib.h>
 
 
main(void)
{
  int N,a,b,c;
  scanf("%d",&N);
  
  a=N/100;
  
  b=N/10-a*10;
  
  c=N-a*100-b*10;
  
  if(a==7 || b==7 || c==7)
  {
    printf("Yes");
  }
  
  else
  {
    printf("No");
  }
  
 
  
  return 0;
}