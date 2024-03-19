#include<stdio.h>
 
int main(void) {
  int n, i, tmp;
  int* a;
  scanf("%d", &n);
  a = (int*)malloc(sizeof(int)*n);
  for(i=0; i<n-1; i++) {
    scanf("%d", &tmp);
    a[tmp-1]++;
  }
  for(i=0; i<n; i++) {
    printf("%d\n", a[i]);
  }
  return 0;
}