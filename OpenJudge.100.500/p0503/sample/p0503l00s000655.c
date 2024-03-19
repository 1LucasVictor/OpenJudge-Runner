#include<stdio.h>
#include<stdlib.h>


int int_sort( const void * a , const void * b ) {
  if( *( int * )a < *( int * )b ) {
    return -1;
  }
  else
  if( *( int * )a == *( int * )b ) {
    return 0;
  }
  return 1;
}

int main(void){
 
  int N;
  int A[200000];
  int i,j;
  
  size_t data_cnt;
  
   scanf("%d\n",&N);
  
  for(i=0;i<N;i++){
  	
    scanf("%d ",&A[i]);
  
  }
  
  
 
  data_cnt =N;
  
  qsort((void*)A, data_cnt , sizeof(A[0]), int_sort );
  
  int y=1;
 
  for(i=0;i<N-1;i++){
  	if(A[i]==A[i+1]){
    	y=0;
    }
  }
   
  if(y==1){
  	printf("YES\n");
  }else{printf("NO\n");}
  
  
  return 0;
  
}