#include <stdio.h>
#include <stdlib.h>
 
//qsort
int asc(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}
int desc(const void *a, const void *b) {
  return *(int *)b - *(int *)a;
}
 
int main(void) {
 
  // 入力
  int n,a,b;
  scanf("%d",&n);
  scanf("%d",&a);
  scanf("%d",&b);
  
  int min=a*n;
  if(min>b)min=b;
  printf("%d",min);
  
  return 0;
}