#include <stdio.h>

int main()
{
	int point[5];
	int k;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &point[i]);
	}
	scanf("%d", &k);

	if (point[4] - point[0] > k) {
		printf(":(\n");
	}
	else {
		printf("Yay!\n");
	}

	return 0;
}
