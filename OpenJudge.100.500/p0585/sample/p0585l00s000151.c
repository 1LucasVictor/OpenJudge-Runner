#include "stdio.h"

int main(void)
{
  int A,B,T;
  scanf ("%d %d %d",&A,&B,&T);
  T=(T-(T%A))/A;
  printf ("%d",T*B);
  return 0;
}