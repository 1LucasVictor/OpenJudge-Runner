#include <stdio.h>
#include <string.h>

int main()
{
	int inputN, printOutput;

	scanf("%d", &inputN);

	if (inputN % 2 != 0)
	{
		printOutput = inputN / 2 + 1;
	}
	else
	{
		printOutput = inputN / 2;
	}

	printf("%d \n", printOutput);
	return 0;
}