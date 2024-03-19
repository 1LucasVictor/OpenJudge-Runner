#include <stdio.h>

int main() {
	char number[1001];
	int sum, i;

	while (1) 
	{
		sum = 0;
		scanf("%s", number);

		if (number[0] == '0') break;

		for (i = 0; number[i] != '\0'; i++)
			sum += number[i] - '0';

		printf("%d\n", sum);
	}

	return 0;
}