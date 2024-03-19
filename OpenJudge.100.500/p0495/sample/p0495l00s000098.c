#include <stdio.h>
#include <string.h>

int main(void)
{
	char	comp[4];	//[S] Company!

	//STDinput S. 3 chars.
	scanf("%s", comp);

	if( (strcmp(comp, "AAA") == 0) || (strcmp(comp, "BBB") == 0) )
		printf("No");
	else
		printf("Yes");

	return (0);
}