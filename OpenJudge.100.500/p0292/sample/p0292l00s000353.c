#include <stdio.h>

int swap(int *x,int *y);

int main()
{
  int A[100],N,flag=1,j,i,temp;

    scanf("%d",&N);
    for(i=0;i<N;i++){
      scanf("%d",&A[i]);
    }
    i=0;
    while(flag!=0){
      flag=0;
      for(j=N-1;j>=1;j--){
	if(A[j]<A[j-1]){
	  /*	  temp = A[j];
	  A[j] = A[j-1];
	  A[j-1] = temp;*/
	  	  swap(&A[j],&A[j-1]);
	  flag=1;
	  i++;
	}
      }
    }
    for(j=0;j<N;j++){
      printf("%d",A[j]);
    }
    printf("\n%d",i);
    return 0;
}

int swap(int *x,int *y){
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}