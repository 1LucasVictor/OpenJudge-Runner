#include <stdio.h>

int main()
{
	int H, N;
	scanf("%d%d", &H, &N);

	int attackSum = 0;
	for (int i = 0; i < N; ++i)
	{
		int foo;
		scanf("%d", &foo);
		attackSum += foo;
	}

	if (attackSum >= H) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return 0; 
}