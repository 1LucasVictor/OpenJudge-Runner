#include <stdio.h>
#define N 100

int main(){
  int i,j;
  int count=0;
  int n;
  int A[N];
  int a;
  
  scanf("%d",&n);
  for(i=0;i<n;i++) scanf("%d",&A[i]);
  
  for(i=0;i<n-1;i++){
    for(j=n-1;j>i;j--){
      if(A[j]<A[j-1]){
	a=A[j];
	A[j]=A[j-1];
	A[j-1]=a;
	count++;
      }
    }
  }
 
  for(i=0;i<n;i++){
    printf("%d",A[i]);
    if(i!=n-1)printf(" ");
  }
  printf("\n");
  printf("%d\n",count);
  
  return 0;
  
}