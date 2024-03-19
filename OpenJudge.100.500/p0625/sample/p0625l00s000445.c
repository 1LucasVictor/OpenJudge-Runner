#include <stdio.h>

int main() {
	
	int A=0, B=0;
	scanf("%d %d", &A, &B);
	if(A<=8){
		if(B<=8){
			printf("Yay!");
		}
		else if(B>8){
			printf(":(");
		}
	}
	else if(A>8){
		printf(":(");
	}
	
	return 0;
}