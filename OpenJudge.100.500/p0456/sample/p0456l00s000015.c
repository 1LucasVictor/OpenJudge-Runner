#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	char *S = malloc(((2 * 100000) + 1) * sizeof(char));
	char *T = malloc(((2 * 100000) + 1) * sizeof(char));
	int len;
	int ans;

	scanf("%s", S);
	scanf("%s", T);
	len = strlen(S);
	ans = 0;
	for (int i = 0; i < len; i++)
	{
		if(S[i] != T[i])
			ans++;
	}

	printf("%d\n", ans);
	return 0;
}
