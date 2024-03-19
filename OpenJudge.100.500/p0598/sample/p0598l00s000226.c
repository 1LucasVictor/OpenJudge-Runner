#include <stdio.h>

int main(void) {
	int num1,num2;

	scanf("%d%d", &num1,&num2);
	if (num2%num1 == 0) {
		printf("%d\n", num1+num2);
	}
	else {
		printf("%d", num2 - num1);
	}
	return 0;
}