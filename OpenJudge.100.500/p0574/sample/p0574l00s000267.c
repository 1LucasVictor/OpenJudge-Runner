#include <stdio.h>

int main(void)
{
	char S[5];
	scanf("%s", S);

	int i, flag = 0;
	for (i = 1; i < 4; i++)
		if (S[i] == S[i - 1])
			flag = 1;
	puts(flag ? "Bad" : "Good");
	return 0;
}
