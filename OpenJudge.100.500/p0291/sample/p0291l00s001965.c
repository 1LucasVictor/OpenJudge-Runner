#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, j, n, max;
  scanf("%d", &n);
  int *a = (int *)malloc(sizeof(int)*n);
  for(i=0; i<n; i++)
    scanf("%d", a+i);
  max = a[1]-a[0];
  for(i=0; i<n-1; i++){
    for(j=i+1; j<n; j++)
      if(max < a[j] - a[i]) max=a[j]-a[i];
  }

  printf("%d\n", max);
  return 0;
}