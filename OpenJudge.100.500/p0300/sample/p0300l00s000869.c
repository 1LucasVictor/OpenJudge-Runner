#include<stdio.h>
int main(void){
  int i,j,c=0;
  int N1,N2;
  int A[10000];
  int B[500];

  scanf("%d",&N1);
  for(i=0;i<N1;i++){
    scanf("%d",&A[i]);
  }

  scanf("%d",&N2);
  for(i=0;i<N2;i++){
    scanf("%d",&B[i]);
  }

  for(i=0;i<N1;i++){
    for(j=0;j<N2;j++){
      if(A[i]==B[j]){
	c++;
      }
    }
  }

  printf("%d\n",c);
  return 0;
}