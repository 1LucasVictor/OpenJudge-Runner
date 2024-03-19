#include <stdio.h>

#define INPUT_MAX	3

int main(void)
{
	int num[INPUT_MAX];
	int five = 0;
	int seven = 0;
	int idx;

	scanf("%d %d %d", &num[0], &num[1], &num[2]);

	for (idx = 0; idx < INPUT_MAX; idx++) {
		if (num[idx] == 5) {
			five++;
		}
		if (num[idx] == 7) {
			seven++;
		}
	}

	if ((five == 2) && (seven == 1)) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}

	return 0;
}
