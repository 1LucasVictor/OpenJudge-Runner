/*saidaiti*/
#include<stdio.h>
int main(void)
{
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  if(a+b>a-b&&a+b>a*b){
         printf("%d\n",a+b);
  }
  else if(a-b>a+b&&a-b>a*b){
         printf("%d\n",a-b);
  }
  else{
         printf("%d\n",a*b);
  }
  return 0;
}