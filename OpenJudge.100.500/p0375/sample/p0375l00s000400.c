#include <stdio.h>

int main(int argc, char** argv)
{
	int num;

	scanf("%d", &num);

	int i = 1;
	while (1) {
		int x = i;
		if (x % 3 == 0) {
			printf(" %d", i);
		}
		else {
			while (1) {
				if (x % 10 == 3) {
					printf(" %d", i);
				}

				x /= 10;
				if (!x) {
					break;
				}
			}
		}

		if (++i > num) {
			break;
		}
	}

	printf("\n");
	return 0;
}