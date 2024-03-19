#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int compare_int(const void *a, const void *b) {
	return *(int *)a - *(int *)b;
}

int main() {

	int n;
	int i;
	int count = 0;

	scanf("%d", &n);

	unsigned int a[n];

	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	qsort(a, n, sizeof(int), compare_int);


	for(i = 0; i < n; i++) {
		if(a[i] == a[i+1]) {
			count++;
			break;
		}
	}
	if(count > 0) {
		printf("NO\n");
	}
	else{
		printf("YES\n");
	}

	return 0;


}
