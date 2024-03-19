#include<stdio.h>
#define N 10000

int main()
{
  int n, i, a[N];
  long min, max, sum=0;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%d", &a[i]);
    sum += a[i];
  }

  min = a[0];
  max = a[0];

  for(i = 1; i < n; i++){
    if(min > a[i]) min = a[i];
    if(max < a[i]) max = a[i];
  }

  printf("%d %d %d\n", min, max, sum);

  return 0;
}