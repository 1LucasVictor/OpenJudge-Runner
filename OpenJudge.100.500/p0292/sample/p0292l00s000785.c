#include<stdio.h>
int main(){
  int n = 1;
  int i,tmp,N,count=0;

  scanf("%d",&N);
  int A[N];
  
  for( i=0 ; i<N ; i++ ){
    scanf("%d",&A[i]);
  }
  
  while(n){
    n = 0;
    for( i=N-1 ; i>0 ; i-- ){
      if(A[i] < A[i-1]){
	tmp = A[i];
	A[i] = A[i-1];
	A[i-1] = tmp;
	count++;
	n = 1;
      }
    }
  }

  for( i=0 ; i<N ; i++)
    printf("%d ",A[i]);

  printf("\n%d\n",count);
    
  return 0;
}

