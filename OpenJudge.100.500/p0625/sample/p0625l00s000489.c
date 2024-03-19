#include <stdio.h>

int main(void)
{
	int A, B;
	scanf("%d %d", &A,&B);
	
	if( A <= 16 && A >= 1 && B <= 16 && B >= 1){
		printf("Yay!");
	}else{
		printf(":(");
	}
	
	return 0;
}