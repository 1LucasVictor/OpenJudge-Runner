#include <stdio.h>
int main(void)
{
  int a;
  int result=0;
  scanf("%d",&a);
  if(a/100==7){
   result++;
  }
  a=a%100;
  if(a/10==7)
  {
   result++;
  }
  a=a%10;
  if(a==7)
  {
   result++;
  }
  if(result>=1){
  printf("Yes");
  }
  else if(result==0)
  {
   printf("No");
  }
}