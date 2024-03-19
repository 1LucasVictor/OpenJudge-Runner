#include"stdio.h"

int main(void)
{
  unsigned int X,Y,ans;
  
  //input
  scanf("%d %d",&X,&Y);
  
  //check&output
  if(Y%2 != 0||Y-2*X>2*X)
  {
  	printf("No");
  }else{
  	printf("Yes");
  }
  
  return 0;
}