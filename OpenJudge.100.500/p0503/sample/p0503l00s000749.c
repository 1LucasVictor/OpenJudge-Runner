#include<stdio.h>
#include <stdlib.h>
void qsort(
  void *base, size_t num, size_t size,
  int (*compare)(const void *a, const void *b)
);
int asc(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

int main(void){
  int n;
  scanf("%d",&n);
  int v[n];
  for(int i=0;i<n;i++){
    scanf("%d",&v[i]);
  }
  qsort(v, sizeof(v) / sizeof(int), sizeof(int), asc);
  for(int i=0;i<n-1;i++){
    if(v[i]==v[i+1]){
      printf("NO");
      return 0;
    }
  }
  printf("YES");
  return 0;
}
