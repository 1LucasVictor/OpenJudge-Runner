#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b;
  int x=1;
  int ret;

  ret=scanf("%d", &a);
  ret=scanf("%d", &b);
/*
  while (b-a>0){
    ++x;
    b=b-a+1;
  }
*/
  x=(b-1)/(a-1);
  if ((b-1)>(a-1)*x){
    ++x;
  }
  printf("%d\n", x);

  return 0;
}
