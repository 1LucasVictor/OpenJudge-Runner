#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int k = n%10;
  
  if(k==3)
    printf("bon\n");
  else if(k==0||k==1||k==6||k==8)
    printf("pon\n");
  else
    printf("hon\n");
  
  return 0;
}