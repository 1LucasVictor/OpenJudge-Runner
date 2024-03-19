#include <stdio.h>

int main(void) {
	int i = 0;
	int number;
	int stack[10];
	
	while (scanf("%d", &number) != EOF) {
		if(number != 0)
			stack[i++] = number;
		else
			printf("%d\n", stack[i-- - 1]);
	}
	return 0;
}