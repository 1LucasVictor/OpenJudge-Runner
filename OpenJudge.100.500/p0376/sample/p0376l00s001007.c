#include <stdio.h>

void reverseNumbers(int size,int numbers[])
{
	for (--size; size>=0; size--) {
		printf("%d", numbers[size]);
		if (size != 0) {
			printf(" ");
		}
	}
	printf("\n");
}

int main(void) {
	int	numbers[100], i, length;
	scanf("%d", &length);
	for (i = 0; i < length; i++) {
		scanf("%d", &numbers[i]);
	}
	reverseNumbers(length,numbers);
	return 0;
}
