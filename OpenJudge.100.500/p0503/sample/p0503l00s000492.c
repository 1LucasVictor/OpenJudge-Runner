#include <stdio.h>

int main(void) {
	int n,i,j;
	scanf("%d", &n);
	int ary[n];
	for (i=0; i<n; i++) {
		scanf("%d", &ary[i]);
		for (j=0; j<i; j++) {
			if (ary[i] == ary[j]) {
				printf("NO");
				return 0;
			}
		}
	}
	printf("YES");
	
	return 0;
}
