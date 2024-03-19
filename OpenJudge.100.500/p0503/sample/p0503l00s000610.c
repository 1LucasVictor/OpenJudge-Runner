#include <stdio.h>

int main(void){
  int i,k,j,n;
  int A[200000];
  
  scanf("%d", &n);
  j = 0;
  
  for(i=0;i<n;i++){
    scanf("%d", &A[i]);
    k=0;
    while(j!=1 && k<i){
      if(A[k] == A[i])
        j = 1;
      k++;
    }
  }
  if(j==0)
    printf("YES\n");
  if(j==1)
    printf("NO\n");
  
  return 0;
}