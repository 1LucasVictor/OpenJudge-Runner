#include <stdio.h>

int main(void) {

	int A;
	int B;
    int T;

	scanf("%d", &A);
	scanf("%d", &B);     
    scanf("%d", &T);
    
    int K = T / A * B;
    
    printf("%d",K);

      
  
	return 0;
}

