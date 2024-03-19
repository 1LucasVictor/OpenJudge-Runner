#include <stdio.h>
#include <stdlib.h>

int main(void) {

	unsigned long A, B, K, tmp;

	scanf("%lu%lu", &A, &B);

	//Aを大きい値に設定
	if(B > A){
		tmp = A;
		A = B;
		B = tmp;
	}

	if((A-B)%2 != 0){
		printf("IMPOSSIBLE");
	}else{
		K =(A - (A -B)/2) ;
		printf("%lu", K);
	}


	return EXIT_SUCCESS;
}