#include <stdio.h>

int main(void){

  int i,n,A[100];

  scanf("%d\n",&n);
  for(i=0;i<n;i++){
      scanf(" %d",&A[i]);
    }
  
  for(i=n-1;i>=0;i--){
    if(i != n-1)printf(" ");
    printf("%d",A[i]);
  }
  printf("\n");
  return 0;
}