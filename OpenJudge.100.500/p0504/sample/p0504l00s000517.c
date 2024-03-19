#include<stdio.h>

int main(void)
{
  int H,A,cnt=0;
  
  scanf("%d %d",&H,&A);
  
  while(H>0)
  {
    H -= A;
    cnt++;
  }
  
  printf("%d\n",cnt);
  
  return 0;
}