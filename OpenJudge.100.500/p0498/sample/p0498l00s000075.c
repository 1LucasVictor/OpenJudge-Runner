#include<stdio.h>
#include <math.h>


int main()
{
  int N,num=0;
  scanf("%d",&N);
  if(N%2==1)
  {
    num=num+1;
  }
  
  num=num+N/2;
  
  printf("%d",num);

  
  return 0; 
}