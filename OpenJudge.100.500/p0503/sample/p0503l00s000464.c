#include <stdio.h>
#include <stdlib.h>

int main() {
	long N;
	scanf("%ld",&N);
	long *p = (long*)malloc(sizeof(long)*N);
	
	for (long i = 0;i < N;i++) {
		scanf("%ld",p+i);
	}
	
	for (long j = 0;j < N-1;j++) {
		for (long k = j+1;k < N;k++) {
			if (p[j] == p[k]) {
				printf("NO");
				return 0;
			}
		}
	}
	printf("YES");
	return 0;
}