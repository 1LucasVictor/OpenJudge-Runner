#include <stdio.h>
int main()
{
  int N,a,i=0,j,k,flag=1,count=0;
  int A[100];
  
  scanf("%d",&N);

  for(a=0; a<N; a++){
    scanf("%d",&A[a]);
  }

  while(flag){
    flag = 0;
    for(j=N-1; j>=i+1; j--){
      if(A[j] < A[j-1]){
	k = A[j];
	A[j] = A[j-1];
	A[j-1] = k;
	flag = 1;
	count++;
      }
    }
    i++;
  }

  for(i=0; i<N; i++){
    printf("%d ",A[i]);
  }
  
    printf("\n");  
    printf("%d\n",count);
  return 0;
}

