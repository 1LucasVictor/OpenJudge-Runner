#include <stdio.h>
#include <math.h>

int isPrimeNumber(int v)
{
	int i, cnt;

	cnt = 0;
	if (v == 0 || v == 1) {
		return 0;
	}
	else if (v == 2 || v == 3) {
		return 1;
	}
	else if (v % 2 == 0) {
		return 0;
	}
	else {
		for (i = 1; i <= sqrt((double)v); i += 2) {
			if (v % i == 0) {
				cnt++;

				if (cnt > 1) {
					return 0;
				}
			}
		}
	}
	return 1;
}

int main(int argc, char** argv)
{
	int N, i, innum, result;
	result = 0;

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d", &innum);

		if (isPrimeNumber(innum)) {
			result++;
		}
	}

	printf("%d\n", result);
	return 0;
}