#include <stdio.h>

int main()
{
	int x, y;
	int sum;
	int flag = 0;

	scanf("%d %d", &x, &y);

	for (int i = 0; i <= x; i++) {
		sum = i * 4 + (x - i) * 2;
		if (sum == y)
			flag = 1;
	}

	if (flag == 1)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}