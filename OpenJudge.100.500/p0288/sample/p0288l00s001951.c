#include<stdio.h>

int main(void){
  int i,j,k;
  int key;
  int A[10];
  int N;

  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
  }

    for(k=0;k<N;k++){
      if(k>0)printf(" ");
      printf("%d ",A[k]);
    }

    printf("\n");

  for(j=1;j<N;j++){
    key=A[j];
    i=j-1;

    while(1){
      if(i>=0 && A[i]>key){
	A[i+1]=A[i];
	i=i-1;
      }
      else break;
    }

    A[i+1]=key;

    for(k=0;k<N;k++){
      if(k>0)printf(" ");
      printf("%d",A[k]);
    }

    printf("\n");

  }
  return 0;

}