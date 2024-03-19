#include <stdio.h>
#include <stdlib.h>

int main()
{
	int D, N;
	scanf("%d %d", &D, &N);
	
	int i, ans = 1;
	for (i = 0; i < D; i++) ans *= 100;
	if (N == 100) ans *= 101;
	else ans *= N;
	
	printf("%d\n", ans);
	fflush(stdout);
	return 0;
}