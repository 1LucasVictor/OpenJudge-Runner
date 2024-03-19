#include <stdio.h>
#include <stdlib.h>

int main(){
  int N;
  long int *A;
  long int *table;
  int i=0;
  int flag = 0;
  long int tmp;
  
  scanf("%d",&N);
  
  A = (long int *)malloc(sizeof(long int) *N);
  table = (long int *)malloc(sizeof(long int) *100000000);
  
  for(i=0;i<N;i++){
  
    scanf("%ld",&A[i]);
    tmp = A[i];
    if(table[tmp] != 1) table[tmp] = 1;
    else if(table[tmp] == 1){
      flag = 1;
      break;
    }
  }
  
  if(flag) printf("NO\n");
  else printf("YES\n");
  
  free(A);
  free(table);
  return 0;
}