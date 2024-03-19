#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int status = 1;
	int max_num;
	int x;
	int a;
	int b;
	int ret;

	max_num = (int)pow(10, 9);

	ret = scanf("%d %d %d", &x, &a, &b);
	if (ret == -1) {
		goto end;
	}

	if (x > max_num) {
		goto end;
	}
	if (a > max_num) {
		goto end;
	}
	if (b > max_num) {
		goto end;
	}

	if (b <= a) {
		printf("delicious\n");
	} else if (b <= a + x) {
		printf("safe\n");
	} else {
		printf("dangerous\n");
	}

	status = 0;

end:
	if (status != 0) {
		fprintf(stderr, "Parameter error.\n");
	}

	return 0;
}

