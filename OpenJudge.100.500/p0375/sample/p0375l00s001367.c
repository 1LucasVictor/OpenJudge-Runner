#include<stdio.h>
int main(void)
{
  int i,n;
  scanf("%d",&n);
  for(i=3;i<=n;i++){
    if((i%3)==0 || i%10==3)printf(" %d",i);
  }
    printf("\n");

  return 0;
}