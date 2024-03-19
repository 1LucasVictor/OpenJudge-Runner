#include <stdio.h>
#include <string.h>

#define ARRAY_SIZE 5
int main()
{
	char inputN[ARRAY_SIZE];

	scanf("%s", &inputN);

	if (strcmp(inputN, "AAA") == 0 && strcmp(inputN, "BBB"))
	{
		printf("No \n");
	}
	else
	{
		printf("Yes \n");
	}
	
	return 0;
}