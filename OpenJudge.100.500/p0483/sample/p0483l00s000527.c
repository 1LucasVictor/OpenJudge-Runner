#include<stdio.h>
int main(void)
{
  int N;
  scanf("%d",&N);
  if(N/700==1||N%10==7||(N%100)/70==1)
    printf("Yes");
  else
    printf("No");
  return 0;
}