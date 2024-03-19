#include <stdio.h>
#include <string.h>
int main()
{
	char input[101];
	scanf("%s", input);
	if(input[1] == 'B')
	{
		printf("ARC\n");
	} else
	{
		printf("ABC\n");
	}
	return 0;
}