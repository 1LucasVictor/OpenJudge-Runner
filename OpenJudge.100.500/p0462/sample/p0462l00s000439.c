#include <stdio.h>

int main()
{
	long long A;
	char B[6];
	scanf("%lld", &A);
	scanf("%s", B);
	
	int i, b = 0;
	for (i = 0; B[i] != 0; i++) if (B[i] != '.') b = b * 10 + (B[i] - '0');
	printf("%lld\n", A * b / 100);
	fflush(stdout);
	return 0;
}