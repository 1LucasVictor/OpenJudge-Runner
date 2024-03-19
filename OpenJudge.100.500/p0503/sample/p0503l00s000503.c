#include<stdio.h>
#include<string.h>
#include<math.h>

int main(void) {
	long int n,temp;
	long int a[200000];

	scanf("%ld", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		for (int j = i; j > 0; j--) {
			if (a[j - 1] > a[j]) {
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
			else if (a[j - 1] == a[j]) {
				printf("NO");
				return 2;
			}
			else break;
		}
		if (i == n - 1) printf("YES");
	}
	return 0;
}
