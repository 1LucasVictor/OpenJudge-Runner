#include<stdio.h>

int main(void)
{
	unsigned long int A,B,C,K,sum;
  	
  scanf("%lu%lu%lu%lu",&A,&B,&C,&K);
  
  if(A>K)
  {
  printf("%lu",A);
  }else if(A+B>K){
  printf("%lu",A);
  }else{
    printf("%lu",A-K+A+B);
  }  
	return 0;
}