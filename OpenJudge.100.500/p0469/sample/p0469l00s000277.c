#include<stdio.h>

int main (void){
  int A, B, K;
  
  int flag = 5;
  
  scanf("%d %d %d", &K, &A, &B);
  
  if (K<1 || 1000<K){
    flag = 0;
  }
  if ((A<1) || (A>B) || (1000<B)){
    flag = 0;
  }
  
  for (int i=1; (i*K)>1000; i++){
    if(A<=(i*K) && (i*K)<=B){
      flag = 5;
    }
  } 
  
  if(flag == 0){
    printf("NG\n");
  }else{
    printf("OK\n");
  }
  return 0;
}
  
    
