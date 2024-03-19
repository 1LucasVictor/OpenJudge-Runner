#include <stdio.h>

#define MAX 10000

int main (void)
{
  int i,j,k,n,array[MAX],prime=0;

  scanf ("%d",&n);
  for (i = 0 ; i < n ; i++){
    scanf ("%d",&array[i]);
  }

  for (i = 0 ; i < n ; i++){
    k = 0;
    for (j = 1 ; j <= array[i] ; j++){
      if (array[i] % j == 0)
	k++;
      if (k == 3) break;
    }
    if (k == 2)
      prime++;
  }

  printf ("%d\n",prime);
  return 0;
}