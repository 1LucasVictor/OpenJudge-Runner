#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, N, M, s[6], c[6];
	scanf("%d %d", &N, &M);
	for (i = 1; i <= M; i++) scanf("%d %d", &(s[i]), &(c[i]));
	
	int digit[4] = {-1, -1, -1, -1};
	for (i = 1; i <= M; i++) {
		if (digit[s[i]] == -1) digit[s[i]] = c[i];
		else if (digit[s[i]] != c[i]) break;
	}
	if (i <= M) {
		printf("-1\n");
		fflush(stdout);
		return 0;
	}
	
	int ans = 0, tmp;
	for (i = 1, tmp = 1; i <= N; i++, tmp *= 10) {
		if (digit[N-i+1] != -1) ans += digit[N-i+1] * tmp;
	}
	if (ans == 0 && N == 1) printf("0\n");
	else if (ans >= tmp / 10) printf("%d\n", ans);
	else if (digit[1] == -1) printf("%d\n", ans + tmp / 10);
	else printf("-1\n");
	fflush(stdout);
	return 0;
}