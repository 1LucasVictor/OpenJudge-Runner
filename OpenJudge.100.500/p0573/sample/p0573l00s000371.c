// AtCoder ABC132: A - Fifty-Fifty
// 2019.9.3 bal4u

#include <stdio.h>

char f[128];

int main()
{
	int i, n;
	char S[10];

	scanf("%s", S);
	n = 0; for (i = 0; i < 4; i++) if (++f[S[i]] == 2) n++;
	puts(n == 2? "Yes": "No");
	return 0;
}
