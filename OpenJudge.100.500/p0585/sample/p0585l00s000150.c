#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
  int a;
  int b;
  int t;
  int i;
  scanf("%d %d %d",&a,&b,&t);
  for(i=0;t>=0;i++){
    t=t-a;;
  }
  printf("%d\n",b*(i-1));
}
