#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, j, n, maxv, minv;
  int *R;

  R = (int *)malloc(n * sizeof(int));

  scanf("%d",&n);
  for( i=0 ; i<n ; i++ )
    scanf("%d",&R[i]);

  minv = R[0];
  maxv = R[1] - R[0];

  for( j=1 ; j<n ; j++ ){
    if(R[j]-minv>maxv) maxv = R[j]-minv;
    if(minv>R[j]) minv = R[j];
  }
  printf("%d\n",maxv);
  free(R);
  return 0;
}