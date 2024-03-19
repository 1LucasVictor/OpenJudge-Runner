#include <stdio.h>

int main()
{
	int num[3] = {};
	int fiveCount = 0;
	int sevenCount = 0;
	char* result = "";

	scanf("%d %d %d", &num[0], &num[1], &num[2]);

	for (int i = 0; i < 3; i++)
	{
		if (num[i] == 5) fiveCount++;
		if (num[i] == 7) sevenCount++;
	}

	result = (fiveCount == 2 && sevenCount == 1) ? "YES" : "NO";
	printf("%s", result);

	return 0;
}