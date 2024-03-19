#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char S[4];
	int i;
	scanf("%s", S);
	for (i = 0;i < 3;i++)
	{
		if (S[i] == S[i + 1])
		{
			printf("Bad\n");
			return 0;
		}
	}
	printf("Good\n");
	return 0;
}