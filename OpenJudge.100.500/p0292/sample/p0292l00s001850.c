#include<stdio.h>

int bubbleSort(int A[],int N){
  int i=0,j,count,temp;
  int flag=1;
  for(i=0;i<N;i++){
    if(N==1)break;
    for(j=N-1;j>=i+1;j--){
      if(A[j]<A[j-1]){
	temp=A[j];
	A[j]=A[j-1];
	A[j-1]=temp;
	count++;
      }
    }
  }
  return count;
}


int main(){
  int A[100],N,i,count;
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
  }
  count=bubbleSort(A,N);
  for(i=0;i<N;i++){
    if(i==N-1)printf("%d\n",A[i]);
    else printf("%d ", A[i]);
  }
  printf("%d\n",count);
  return 0;
}
  

