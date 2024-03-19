#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int a[100];
	int i, j, k;
	j = 0;
	k = 0;
	for (i = 0;i < n;i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0;i < n;i++) {
		if (a[i] % 2 == 0) {
			j = j + 1;
			if (a[i] % 3 == 0||a[i]%5 == 0) {
				k = k + 1;
			}
		}
	}
	if (j == k) {
		printf("APPROVED");
	}
	else {
		printf("DENIED");
	}
	return 0;
}