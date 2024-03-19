#include <stdio.h>
#define N 100

int main(){
  int A[N];
  int a,v,i,j,k;

  scanf("%d",&a);
  if(a<0 || a>N){ 
    printf("BAD DATA\n");
    return 0;
  }
  for(i = 0 ; i < a ; i++) scanf("%d",&A[i]);
  for(i = 0 ; i < a ; i++){
    if(0>A[i] || 1000<A[i]){
      printf("BAD DATA\n");
      return 0;
    }
  }
  
  for(i = 0 ; i < a ; i++){
    for(i=0;i<a;i++)  printf("%d ",A[i]);
    printf("\n");
    for(j = 1 ; j < a ; j++){    
      v = A[j];
      k=j-1;
      while(k >= 0 && A[k] > v){
	A[k+1]=A[k];
	k--;
	A[k+1]=v;
      }  
	for(i=0;i<a;i++)  printf("%d ",A[i]);
	printf("\n");
    }
  }
  return 0;
}