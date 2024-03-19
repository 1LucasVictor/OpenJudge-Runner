#include<stdio.h>

#define N 100

int main(){
  int n;
  int A[N];
  int i;

  scanf("%d", &n);

  for(i=0; i<n; i++) {
    scanf("%d" , &A[i]);
  }
  for(i=n-1; i>=0; i--){
    if (i!=0) {
      printf("%d ", A[i]);
    } else {
      printf("%d\n", A[i]);
    }
    
  }
  return 0;
}
