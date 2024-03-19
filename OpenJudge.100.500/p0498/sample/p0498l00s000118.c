#include <stdio.h>
int main(void)
{
  int N;
  scanf ("%d",&N);
  if (N%2==0) printf ("%d",N/2);
  if (N%2==1) printf ("%d",N/2+1);
}
