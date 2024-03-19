#include <stdio.h>

int main(void)
{
	int i, j;
	char input[20], inversion[20];
	while ( scanf("%s", input) != EOF )
	{
		for (i=0; input[i] != '\0'; i++);
		i--;
		
		for (j=0; j <= i; j++)
		{
			inversion[j] = input[i-j];
		}
		
		i++;
		inversion[i] = input[i];
		printf("%s\n", inversion);
	}
	
	return 0;
}