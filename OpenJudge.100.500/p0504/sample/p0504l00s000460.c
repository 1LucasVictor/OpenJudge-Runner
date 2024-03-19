#include <stdio.h>

int main()
{
	int H, A;
	scanf("%d %d", &H, &A);

	int ans = H / A;
	
	if (H%A != 0) {
		ans++;
	}

	printf("%d", ans);

	return 0;
}