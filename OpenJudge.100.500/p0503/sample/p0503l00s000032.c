#include <stdio.h>
#include <stdlib.h>
int main(){
  int N,i,j,tmp;
  int A[200000];
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
  }
  for(i=0;i<N;i++){
    for(j=i;j<N;j++){
      if(A[j]<A[j+1]){
        tmp=A[j];
        A[j]=A[j+1];
        A[j+1]=tmp;
      }
      else if(A[j]==A[j+1]){
      printf("NO");
      return 0;
      }
    }
  }
 
  printf("YES");
  return 0;
}