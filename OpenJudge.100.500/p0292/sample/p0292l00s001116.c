#include<stdio.h>
int main(){
  int A[100],N;
  int i,j,k,flag,temp,num=0;

  scanf("%d",&N);

  for(j=0;j<N;j++){
    scanf("%d",&A[j]);
      }


  while(flag){
    flag=0;
    for(j=N-1;j>=1;j--){
      if(A[j]<A[j-1]){
	temp=A[j];
	A[j]=A[j-1];
	A[j-1]=temp;
	num++;
	flag=1;
      }
    }
  }
    for(j=0;j<N;j++){
      printf("%d ",A[j]); 
      printf(" ");
    }
    printf("\n");
    printf("%d\n",num);

    return 0;
    
}