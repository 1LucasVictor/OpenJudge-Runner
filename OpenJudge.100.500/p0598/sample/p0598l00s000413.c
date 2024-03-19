#include <stdio.h>
#include <string.h>
int main() {
  int a;
  int b;
  scanf("%d %d",&a,&b);
  if (b%a == 0)	{
    printf("%d\n",a+b);
  }
  else {
    printf("%d\n",b-a);
  }
  return 0;
}