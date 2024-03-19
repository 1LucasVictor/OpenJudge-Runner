
#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main() {
	int N;
	scanf("%d", &N);
	int a;
	long long b[200010] = { 0 };
	int i;
	
	for (i = 2; i < N + 1; i++) {
		scanf("%d", &a);
		
		
				b[a] = b[a] + 1;
			}
		
	for (i = 1; i < N + 1; i++) {
		printf("%d\n", b[i]);

	}
	return 0;
}
