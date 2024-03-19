#include <stdio.h>

int main(void){
	int S, digit[4], i;
	scanf("%d", &S);
	for (i = 0; i < 4; i++){
		digit[i] = S % 10;
		S /= 10;
	}
	for (i = 0; i < 3; i++){
		if (digit[i] == digit[i+1]){
			printf("Bad\n");
			return 0;
		}
	}
	printf("Good\n");
	return 0;
}
