#include <stdio.h>
int main(){
  int i,j,N,A[100],minj,count=0,tmp;
  
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
  }
  
  for(i=0;i<N;i++){
    minj=i;
    for(j=i;j<N;j++){
      if(A[j]<A[minj]) minj=j;
    }
    if(minj!=i){
    tmp=A[i];
    A[i]=A[minj];
    A[minj]=tmp;
    count++;
    }
  }
  for(i=0;i<N-1;i++){
    printf("%d ",A[i]);
  }
  printf("%d\n",A[N-1]);
  printf("%d\n",count);
  
  return 0;
}