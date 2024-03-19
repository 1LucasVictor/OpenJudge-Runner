#include<stdio.h>
int main() {
	int n, i, a[10000], min=1000000, max=-1000000, sum=0;
	scanf("%d\n", &n);
	for (i = 0;i < n;i++) {
		scanf("%d", &a[i]);
	}
		for (i = 0;i < n;i++) {
			if (a[i] < min) {
				min = a[i];
			}
			if (a[i] > max) {
				max = a[i];
	}
			sum = sum + a[i];
		}
		printf("%d %d %d\n", min, max, sum);
		return 0;
}