#include <stdio.h>

#define MAX 200000
int main()
{
  int i, j, n, minv, maxv = 0;
  int R[MAX];

  scanf("%d", &n);
  for(i=0; i<n; i++) {
    scanf("%d", &R[i]);
  }

  minv = R[0];
  for(j=1; j<n; j++) {
    if(maxv < R[j]-minv)
      maxv = R[j]-minv;
    if(minv > R[j])
      minv = R[j];
  }
  printf("%d\n", maxv);
  return 0;
}