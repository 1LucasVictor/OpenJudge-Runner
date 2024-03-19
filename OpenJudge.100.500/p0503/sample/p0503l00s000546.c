#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	int n;
	int i, j;
	int count = 0;
	scanf("%d", &n);

	unsigned int a[n];

	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for(i = 0; i < n; i++) {
		for(j = i + 1; j < n; j++) {
			if(a[i] == a[j]) {
				count++;
				break;
			}
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
