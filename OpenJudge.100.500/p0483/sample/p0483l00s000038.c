#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	int inputN = 0;
	char stringArray[10];

	scanf("%d", &inputN);

	// In order to find '7' digit inside the inputed value, program converts variable from int to string array.
	sprintf(stringArray, "%d", inputN);

	long len = strlen(stringArray);
	int digitCounter = 0;

	for (int i = 0; i < len; i++)
	{
		if (stringArray[i] == '7')
		{
			digitCounter++;
		}
	}

	if (digitCounter > 0)
	{
		printf("Yes \n");
	}
	else
	{
		printf("No \n");
	}

	return 0;
}