#include<stdio.h>
int main(void){
  int j,i,N,A[100],key;
  
  scanf("%d",&N);
  for(j = 0 ; j < N ; j++){
    scanf("%d",&A[j]);
    printf("%d ",A[j]);
  }
  printf("\n");
  
  for(j = 1 ; j < N ;j++){
      key = A[j];
      i = j - 1;
      while(A[i] > 0 && A[i] > key){
	A[i+1] = A[i];
	i = i - 1;
      }
      A[i+1] = key;
      for(i = 0 ; i < N ; i++){
	printf("%d ",A[i]);
      }     
      printf("\n");
  }
  return 0;
}