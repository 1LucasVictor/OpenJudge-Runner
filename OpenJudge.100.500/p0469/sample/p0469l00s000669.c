#include<stdio.h>

int main (void){
  int A, B, K;
  
  int flag = 0;
  
  scanf("%d",&K);
  scanf("%d %d",&A, &B);
  
  if (K<1 || 1000<K){
    flag = 1;
  }
  
  if ((A<1) || (A>B) || (1000<B)){
    flag = 1;
  }
  
  if( flag =! 1){
  	for (int i=1; (i*K)>1000; i++){
    	if(A<=(i*K) && (i*K)<=B){
      		flag = 2;
    	}
  	}
  }
  
  if(flag =! 2){
    printf("NG\n");
  }else{
    printf("OK\n");
  }
  return 0;
}
  
    
