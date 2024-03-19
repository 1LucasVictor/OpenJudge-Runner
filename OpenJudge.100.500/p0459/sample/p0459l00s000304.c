#include <stdio.h>
int main(void){


	int a, b;


	scanf("%d", &a);
	scanf("%d", &b); 

	if (b % 2 != 0) {
		printf("No");
	}


	else if (b / a > 4) {

		printf("No");
	}


	else
		printf("Yes");
	return 0;
}