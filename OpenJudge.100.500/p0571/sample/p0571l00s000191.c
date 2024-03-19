#include <stdio.h>

int main(void) {

	int A;
	int B;
    int N;

	scanf("%d", &N);
	scanf("%d", &A);      
    scanf("%d", &B);   
    
    int K = A * N;
    if(K == B){
      printf("%d",B);
    }
    else if(K < B){
      printf("%d",K);
    }
    else{
      printf("%d",B);
    }

      
  
	return 0;
}

