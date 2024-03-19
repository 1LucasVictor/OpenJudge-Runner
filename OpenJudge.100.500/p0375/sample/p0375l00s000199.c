#include<stdio.h>

int input_num;

int main() {
	scanf("%d", &input_num);
	for (int i = 3; i <= input_num; i++) {
		if (i % 3 == 0 || i % 10 == 3) 
			printf(" %d", i);
	}
	printf("\n");

	return 0;
}
