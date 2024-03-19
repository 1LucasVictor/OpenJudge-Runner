#include<stdio.h>
int main(void) {
	int n, a[100];
	int i, count = 0;

	scanf("%d", &n);

	for ( i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			if (
				(a[i] % 3 != 0) && (a[i] % 5 != 0)
				) {
				count = 1;
			}
		}
	}

	if (count==1)
		printf("DENIED\n");

	else
		printf("APPROVED\n");


	return 0;			
	
}