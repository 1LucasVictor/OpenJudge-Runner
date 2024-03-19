#include<stdio.h>
#include<string.h>

int main() {
	int n, a[200000], f = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n - 1; i++) {
		for (int k = i+1; k < n; k++) {
			if (i == k) {
				k++;
			}
			if (a[i] == a[k]) {
				f = 1;
			}
		}
	}
	if (f == 0) {
		printf("YES");
	}
	else {
		printf("NO");
	}
}