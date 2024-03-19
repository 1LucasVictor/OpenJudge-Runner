#include <stdio.h>
#define N 100
int main(){
  int A[N];
  int i,j,n,temp,count=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
  }
  for(i=0;i<n-1;i++){
    for(j=n-1;j>i;j--){
      if(A[j-1]>A[j]){
	temp=A[j];
	A[j]=A[j-1];
	A[j-1]=temp;
	count++;       
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%d ",A[i]);
  }
  printf("\n%d\n",count);
  return 0;
}