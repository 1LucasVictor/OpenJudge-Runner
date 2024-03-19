#include<stdio.h>
int main(void)
{
  int a,b,t,sum=0;
  scanf("%d%d%d",&a,&b,&t);
  while(t>=a){
    sum+=b;
    t-=a;
  }
  printf("%d",sum);
  return 0;
}
