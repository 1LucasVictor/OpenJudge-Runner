#include<stdio.h>
#include<string.h>
#include<math.h>

int main(void) {
	long int n;
	long int a[20000];

	scanf("%ld", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		for (int j = 0; j < i; j++) {
			if (a[i] == a[j]) {
				printf("NO");
				return 2;
			}
		}
		if (i == n - 1) printf("YES");
	}
	return 0;
}
