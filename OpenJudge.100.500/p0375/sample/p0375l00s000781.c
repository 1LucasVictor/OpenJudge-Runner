#include <stdio.h>
#include <math.h>

int main(int argc, char** argv)
{
	int i, num;
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		int x = i;
		if (x % 3 == 0) {
			printf(" %d", i);
		}
		else {
			while (1) {
				if (x % 10 == 3) {
					printf(" %d", i);
					break;
				}

				x /= 10;
				if (x == 0) {
					break;
				}
			}
		}
	}

	printf("\n");
	return 0;
}