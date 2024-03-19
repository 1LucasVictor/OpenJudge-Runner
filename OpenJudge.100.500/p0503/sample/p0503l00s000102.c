#include <stdio.h>
#include <stdlib.h>

int main(){
  int N;
  int *A;
  int *table;
  int i=0;
  int flag = 0;
  long tmp;
  
  scanf("%d",&N);
  
  A = (int *)malloc(sizeof(int) *N);
  table = (int *)malloc(sizeof(int) *100000000);
  
  for(i=0;i<N;i++){
  
    scanf("%d",&A[i]);
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