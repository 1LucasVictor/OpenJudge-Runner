#include<stdio.h>
#include<math.h>
int main(void)
{
  int a;
  scanf("%d",&a);
  a=a+pow(a,2)+pow(a,3);
  printf("%d\n",a);
  return 0;
}
