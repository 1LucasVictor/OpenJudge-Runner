#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int n, m, ok = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		if (m % 2 == 0) {
			if (m % 3 == 0 || m % 5 == 0) continue;
			else ok--;
		}
	}
	if (ok == 1) {
		printf("APPROVED\n");
	}
	else {
		printf("DENIED\n");
	}

	return 0;
}
