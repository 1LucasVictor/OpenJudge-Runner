#include <stdio.h>

int main(void)
{
	char id_S[11];
	char id_T[12];
	int i, c;

	scanf("%s", id_S);
	scanf("%s", id_T);

	c = 0;

	for (i = 0; id_S[i] != '\0'; i++)
	{
		if (id_S[i] != id_T[i])
		{
			c++;
			break;
		}
	}

	if (c == 0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	
	return 0;
}