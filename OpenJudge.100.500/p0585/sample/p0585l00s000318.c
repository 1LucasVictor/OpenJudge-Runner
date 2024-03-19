#include<stdio.h>

int main(void)
{
  int A,B,T;
  int i;
  int x=0;

  scanf("%d %d %d",&A,&B,&T);
  for(i=A;i<=T;i+=A){
    x+=B;
  }
  printf("%d",x);

  return 0;
}
