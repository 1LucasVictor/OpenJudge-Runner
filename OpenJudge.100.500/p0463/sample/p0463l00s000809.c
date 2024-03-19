#include <stdio.h>

int main()
{
  int N;
  
  scanf("%d",&N);
  
  while(N>=10)
    N%=10;
  
  if(N==3)
    printf("bon");
  else if(N==0 || N==1 || N==6 ||N==8)
    printf("pon");
  else
    printf("hon");
}