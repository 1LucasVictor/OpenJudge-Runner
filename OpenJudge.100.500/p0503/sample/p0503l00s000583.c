#include<stdio.h>
#include<stdlib.h>

int int_sort( const void * a , const void * b ) {
  /* 引数はvoid*型と規定されているのでint型にcastする */
  if( *( int * )a < *( int * )b ) {
    return -1;
  }
  else
  if( *( int * )a == *( int * )b ) {
    return 0;
  }
  return 1;
}

int main(void) {
  int n, i;
  int* a;
  scanf("%d", &n);
  a = (int*)malloc(sizeof(int)*n);
  for(i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }
  qsort((void*)a, n, sizeof(int), int_sort);
  for(i=1; i<n; i++) {
    if(a[i] == a[i-1]) {
      printf("NO\n");
      goto fin;
    }
  }
  printf("YES\n");
fin:
  free(a);  
  return 0;
}
