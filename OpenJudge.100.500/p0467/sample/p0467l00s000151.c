#include<stdio.h>
 
int main(){
  int A,B,C,K,i,sum=0,tmp;
  
  scanf("%d%d%d%d",&A,&B,&C,&K);
  tmp=K;
  if((K-A) >= 0){
  	sum = 1*A;
    K -= A;
    if((K-B) >= 0){
  		K -= B;
  	}
  }
  
  for(i=0; i<K; i++){
    
  	if(A>0){
    	sum++;
      A -=1;
    }
    else if(B>0){
    	B -=1;
    }
    else{
      sum--;
    C -=1;
    }
  }
  printf("%d", sum);
	return 0;
}