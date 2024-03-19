#include <stdio.h>
int main(void)
{
  int N;
  scanf ("%d",&N);
  if (N/100||N%100-N%10||N%10==0) printf ("Yes");
  else printf ("No");
  
}