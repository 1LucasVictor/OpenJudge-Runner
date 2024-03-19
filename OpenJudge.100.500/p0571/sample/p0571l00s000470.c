#include <stdio.h>

int main(void){
	int N, A, B;
	int train,taxi;

	scanf("%d %d %d", &N, &A, &B);

	train = N * A;
	taxi = B;

	if(train >= taxi){
  	printf("%d",taxi);
	}else{
  	printf("%d",train);
	}
}