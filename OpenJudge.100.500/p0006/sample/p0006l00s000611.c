#include <stdio.h>

int main(void)
{
	int n, i, tmp;
	int debt = 100000;
	
	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		debt = debt * 1.05;
		if (tmp = debt % 1000) {
			debt += 1000;
			debt -= tmp;
		}
	}
	printf("%d\n", debt);
	
	return 0;
}
	