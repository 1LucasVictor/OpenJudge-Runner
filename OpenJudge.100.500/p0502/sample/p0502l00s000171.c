#include<stdio.h>

int main(void){
  int N;
  int A[100];
  int i;
  
  scanf("%d", &N);
  for(i = 0; i < N; i++){
    scanf("%d", &A[i]);
  }
  
  for(i = 0; i < N; i++){
  if(A[i] % 2 == 0 && A[i] % 3 != 0 && A[i] % 5 != 0){
    puts("DENIED");
    return 0;}
  }
  
  puts("APPROVED");
 
  return 0;
}