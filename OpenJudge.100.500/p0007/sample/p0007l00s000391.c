#include <stdio.h>

int count(int n);

int main()
{
	int n;
	while (scanf("%d", &n) != -1) {
		int cnt;
		cnt = count(n);
		printf("%d\n", cnt);
	}
	return 0;
};

int count(int n)
{
	int a, b, c, d;
	int cnt;
	cnt = 0;
	for (a = 0; a < 10; a++) {
		for (b = 0; b < 10; b++) {
			for (c = 0; c < 10; c++) {
				for (d = 0; d < 10; d++) {
					if (a+b+c+d == n) {
						cnt++;
					}
				}
			}
		}
	}
	return cnt;
}