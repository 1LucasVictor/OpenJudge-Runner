#include <stdio.h>

int main() {
	int A,B,C,K;
	scanf("%d", &A);
	scanf("%d", &B);
  	scanf("%d", &C);
	scanf("%d", &K);

  if(A >= K){
    printf("%d",K);
	}else if(A + B >= K){
      printf("%d",A);
    }else{
    printf("%d",2*A+B-K);
    }
  
  return 0;
}