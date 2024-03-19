#include<stdio.h>
int main (void){
  int i, j, n, max, a;
  int x[200000];
  max = 0;
  scanf ("%d",&n);
  for (i = 0;i < n;i++){
    scanf ("%d",&x[i]);
  }
  for (i = 1;i < n;i++){
    for (j = 0;j < i;j++){
      a = x[i] - x[j];
      if (a > max)
        max = a;
  }}
  printf ("%d\n", max);
  return 0;
}