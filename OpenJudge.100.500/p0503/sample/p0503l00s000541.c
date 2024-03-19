#include<stdio.h>
int main(void){
  
  int N,A[10000],i,j,c=0;
  
  scanf("%d",&N);
  for(i=0;i<N;i++){
	scanf("%d",&A[i]);
    
  }
  
  for(i=0;i<N-1;i++){
	for(j=i+1;j<N;j++){
      if(A[j]==A[i]){
        printf("NO");
        c=1;
        return 0;
      }
    }
  }
  if(c==0){
    printf("YES");
  }
  return 0;
}