#include <stdio.h>
#include <string.h>

int main(void) {
	int a[200000];
	int i, j;
	int n;
	int flag = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i ++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n - 1; i ++) {
		for (j = i + 1; j < n; j ++) {
			//printf("%d %d\n", a[i], a[j]);
			if (a[i] == a[j]) {
				flag = 1;
			}
		}
	}

	if (flag == 0) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}

	return 0;
}
