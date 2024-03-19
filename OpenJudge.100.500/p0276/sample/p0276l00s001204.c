#include <stdio.h>

#define NMAX 101

int main (void)
{
  int i,j,n,k[NMAX],u[NMAX],v[NMAX][NMAX],a[NMAX][NMAX];

  scanf ("%d",&n);
  for (i = 1 ; i < n+1 ; i++){
    scanf ("%d %d",&u[i],&k[i]);
    for (j = 1 ; j < k[i]+1 ; j++)
      scanf ("%d",&v[i][j]);
  }

  //make adjacency matrices
  for (i = 1 ; i < n+1 ; i++){
    for (j = 1 ; j < n+1 ; j++)
      a[i][j] = 0;
    for (j = 1 ; j < k[i]+1 ; j++)
      a[i][v[i][j]] = 1;
  }

  for (i = 1 ; i < n+1 ; i++){
    for (j = 1 ; j < n+1 ; j++){
      printf ("%d",a[i][j]);
      if (j < n) printf (" ");
    }
    printf ("\n");
  }

  return 0;
}