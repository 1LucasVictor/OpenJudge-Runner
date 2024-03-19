#include <stdio.h>

int main(){
  int i, n;

  scanf("%d\n", &n);

  int a[n];

  for(i = 0; i < n; i++){
    if(i == n - 1)
      scanf("%d\n", &a[i]);
    else
      scanf("%d ", &a[i]);
  }

  int min = a[0];
  int max = a[0];
  int sum = 0;
  
  for(i = 0; i < n; i++){
    if(a[i] < min)
      min = a[i];
    if(a[i] > max)
      max = a[i];
    sum += a[i];
  }

  printf("%d %d %d\n", min, max, sum);

  return 0;
}