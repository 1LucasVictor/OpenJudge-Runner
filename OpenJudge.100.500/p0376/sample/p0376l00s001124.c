#include<stdio.h>

int main(){
  int n,i;
  
  scanf("%d", &n);
  
  int *a = (int*)malloc(sizeof(int)*n);

  for(i = 0; i<n ; ++i){
    scanf("%d", &a[i]);
  }

  int work;
  for(i = 0; i <= n/2 ; ++i){
    work = a[i];
    a[i] = a[n - 1 - i];
    a[n - 1 - i] = work;
  }

  for(i = 0; i<n; ++i){
    printf("%d",a[i]);
    if(i != n-1) printf(" ");
  }
  printf("\n");
  
  free(a);
  
  return 0;
}

