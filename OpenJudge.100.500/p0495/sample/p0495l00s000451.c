#include <stdio.h>
#include <string.h>

int main(void)
{
	char S[4];

	scanf("%s", S);
	if (strcmp(S, "AAA") == 0 || strcmp(S, "BBB") == 0)
		printf("No");
	else
		printf("Yes");
	return 0;
}
