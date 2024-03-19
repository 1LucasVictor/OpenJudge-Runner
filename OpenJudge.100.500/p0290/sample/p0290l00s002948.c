#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX (int)sqrt(1e8)

void Prime(int *a)
{
  int i, j;
  for(i=2; i<MAX; i++){
    for(j=2; j*j<=i; j++){
      if(a[j] && i % j == 0) break;
    }
    if(j*j > i) a[i]=1;
  }
  return;
}

int main()
{
  int n, a=0, i, num;
  int *p = (int *)malloc(sizeof(int)*MAX);
  memset(p, 0, sizeof(int) * MAX);
  Prime(p);
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d", &num);
    if(p[num]) a++;
  }
  printf("%d\n", a);
  return 0;
}