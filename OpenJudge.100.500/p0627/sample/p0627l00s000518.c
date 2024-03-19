#include "stdio.h"
int main(){
	int A, B;
	scanf("%d %d", &A, &B);
	int maior = A + B;

	if(A - B > maior){ 
		maior = A - B;
	}		

	if(A * B > maior){ 
		maior = A * B; 	
	}
	
	printf("%d", maior);

	return 0;
}