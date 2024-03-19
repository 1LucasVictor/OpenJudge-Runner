#include <stdio.h>
int main(){
  int i,j,N,minj,cnt=0;
  int temp;
  
　scanf("%d",&N);
  int A[N];
  for(i=0;i<N;i++)
  scanf("%d",&A[i]);
 
  for(i=0;i<N;i++){
    minj=i;
    for(j=i;j<N;j++){
      if(A[j]<A[minj]){
    minj=j;
      }
    }
    temp=A[i];
    A[i]=A[minj];
    A[minj]=temp;
    if(A[i]!=A[minj])
    cnt++;
  }
  for(i=0;i<N-1;i++)printf("%d ",A[i]);
  printf("%d",A[N-1]);
  printf("\n%d\n",cnt);
  return 0;
}