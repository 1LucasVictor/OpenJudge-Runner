#include<stdio.h>
#include<stdlib.h>

int main(void){
 
  int N;
  int A[200000];
  int i,j;
  
  scanf("%d\n",&N);
  
  for(i=0;i<N;i++){
  	
    scanf("%d ",&A[i]);
  
  }
  
  int y=1;
 
  for(i=0;i<N-1;i++){
  	
    for(j=i+1;j<N;j++){
    
    	if(A[i]==A[j]){y=0;}	
      
    }
  
  }
  
  if(y==1){
  	printf("YES\n");
  }else{printf("NO\n");}
  
  
  return 0;
  
}