#include<stdio.h>

int main(void){
  int n;
  int i;
  int max,min;
  int sum = 0;

  scanf("%d", &n);

  int a[n];

  for(i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  max = a[0];
  min = a[0];
  sum = a[0];

  for(i = 1; i < n; i++){
    if(max < a[i])
      max = a[i];
    if(min > a[i])
      min = a[i];
    sum += a[i];
  }

  printf("%d %d %d\n", min, max, sum);
  return 0;
}