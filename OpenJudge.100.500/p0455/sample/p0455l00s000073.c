#include<stdio.h>
#include<math.h>

int main(void)
{
  int a;
  int b;
  scanf("%d",&a);

  b = a+pow(a,2)+pow(a,3);
  printf("%d\n",b);

  return 0;
}