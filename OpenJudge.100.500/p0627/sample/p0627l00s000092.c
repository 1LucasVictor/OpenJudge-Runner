#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int a;
  int b;
  int max;
  int add;
  int sub;
  int mul;

  scanf("%d%d",&a,&b);

  if(-1001>a || a>1001 || -1001>b || b>1001){ 
     exit(1);
  }


  add = a+b;
  sub = a-b;
  mul = a*b;

  max = add;
  if(max < sub ){
    max = sub;
  }
  if(max < mul ){
    max = mul;
  }

  printf("%d\n",max);
  
  return 0;
}