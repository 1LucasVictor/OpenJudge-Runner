#include<stdio.h>
 
int main(){
  int A,B,C,K,i,sum=0;
  
  scanf("%d%d%d%d",&A,&B,&C,&K);
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