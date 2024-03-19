#include <stdio.h>

int main()
{
	
	char S[100001];
	scanf("%s", S);

	int i, count[2] = {};
	for (i = 0; S[i] != 0; i++) count[S[i] - '0']++;
	
	printf("%d\n", (count[0] < count[1])? count[0] * 2: count[1] * 2);
	fflush(stdout);
	return 0;
}