#include<stdio.h>
int main(void)
{
  int a,b;
  scanf("%d %d",&a,&b);
  int max=a+b;
  if(a-b>max&&a-b>a*b){
    max=a-b;
  }else if(a*b>max&&a*b>a-b){
    max=a*b;
  }
  printf("%d\n",max);
  return 0;
}
