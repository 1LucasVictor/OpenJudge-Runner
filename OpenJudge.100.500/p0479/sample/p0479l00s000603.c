#include<stdio.h>

int main() {

	int n,i;

	scanf("%d", &n);
	int a[n-1],c[n];
	for (i = 0; i < n-1; i++) {
		scanf("%d", &a[i]);
	}

	for(i=0;i<n;i++){
		c[i] = 0;
	}

	for (i = 0; i < n-1; i++) {
		c[a[i]-1]++;
	}

	for (i = 0; i < n; i++) {
		printf("%d\n", c[i]);
	}

	return 0;
}
