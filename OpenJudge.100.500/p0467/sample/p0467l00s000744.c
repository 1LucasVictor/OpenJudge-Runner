#include<stdio.h>
 
int main(){
  int A,B,C,K,i,sum=0,tmp;
  
  scanf("%d%d%d%d",&A,&B,&C,&K);
  if((K-A) >= 0){
  	sum = 1*A;
    K -= A;
    if((K-B) >= 0){
    	K -= B;
      for(i=0; i<K; i++){
      	sum--;
      }
    }
  }
  printf("%d", sum);
	return 0;
}