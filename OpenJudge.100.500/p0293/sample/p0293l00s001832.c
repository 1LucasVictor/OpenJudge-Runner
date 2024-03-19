#include<stdio.h>

int main(){
  int i, j, mini, n, p, count=0;
  int A[100];

    scanf("%d",&n);

  for(i=0 ; i<n ; i++) scanf("%d",&A[i]);

  for(i=0 ; i<n ; i++){
    mini = i;
    for(j=n-1 ; j>i ; j--){
      if(A[j] < A[mini]) mini = j;
    }
    if(mini != i){
      p = A[i];
      A[i] = A[mini];
      A[mini] = p;
      count++;
    }
  }
  
  for(i=0 ; i<n-1 ; i++) printf("%d ",A[i]);
  printf("%d\n%d\n",A[i],count);
  
  return 0;
}