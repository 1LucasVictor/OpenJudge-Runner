#include <stdio.h>

int main()
{
  int A,B,max;
  scanf("%d %d",&A,&B);
  max=(A+B>A-B)? A+B:A-B;
  max=(A*B>max)? A*B:max;

  printf("%d\n",max);

  return 0;
}
