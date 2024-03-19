#include<stdio.h>
int main() {
	int n,a[100], count=0,count2=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (a[i] % 2 == 0) {
			count++;
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			if (a[i] % 3 == 0 || a[i] % 5 == 0) {
				count2++;
			}
		}
	}

	if (count == count2) {
		printf("APPROVED");
	}
	else {
		printf("DENIED");
	}
}