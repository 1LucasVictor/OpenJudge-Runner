#include <stdio.h>

int main(void){
  int i,k,j,n;
  int A[200000];
  
  scanf("%d", &n);
  j = 0;
  
  for(i=0;i<n;i++){
    scanf("%d", &A[i]);
    for(k=0;k<i;k++){
      if(A[k] == A[i])
        j = 1;
    }
  }
  if(j==0)
    printf("YES\n");
  if(j==1)
    printf("NO\n");
  
  return 0;
}