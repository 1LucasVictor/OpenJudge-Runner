#include<stdio.h>
int main(void)
{
  int i=1;
  int x,n;
  scanf("%d",&n);
  while(i<(n+1)){
    x=i;
    if((x%3==0)&&(x%10==3)){
      printf(" %d",x);
    }else if((x%3!=0)&&(x%10==3)){
      printf(" %d",x);
    }else if((x%3==0)&&(x%10!=3)){
      printf(" %d",x);
    }
    ++i;
  }
  printf("\n");
  return 0;
}
