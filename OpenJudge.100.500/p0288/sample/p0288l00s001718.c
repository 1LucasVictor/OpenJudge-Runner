#include <stdio.h>
int main(){
  int n,i,j,v;
  int A[1000];
  scanf("%d",&n);
  
  for(i=0;i<n;i++) scanf("%d",&A[i]);

  for(i=0;i<n;i++){
    v = A[i];
    j = i - 1;
    while(j >= 0 && A[j] > v){
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = v;
    for(j=0;j<n;j++){
      printf("%d",A[j]);
      if(j != n-1) printf(" ");
    }
    if(i!=n-1) printf("\n");
  }
  return 0;
}