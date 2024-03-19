#include<stdio.h>
#include<stdlib.h>
int main(){
  int N, K, num1, num2;
  int zero = 0;
  scanf("%d %d", &N, &K);
  
  while(N-K > 0){
    N = N-K;
  }
  num1 = N;
  num2 = abs(N-K);
	if(num1 < num2){
      printf("%d", num1);
    }
  	if(num1 > num2){
      printf("%d", num2);
    }
  	else{
      printf("%d", zero);
    }
  
  return 0;
}