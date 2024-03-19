#include <stdio.h>

int main(void) {
	int n, i, j, cnt;
	int prime[100000];
	char instr[80];
	
	for(i=0; i<100000; i++)  prime[i]=1;
	prime[0] = prime [1] =0;
	
	while (fgets(instr, sizeof(instr), stdin) != NULL) {
		sscanf(instr, "%d", &n);
		cnt=0;
		
		for (i=2; i<=n; i++) {
			for (j=2; i*j<=n; j++) {
				prime[i*j] = 0;
			}
		}
		
		for (i=0; i<=n; i++)  cnt += prime[i];
		
		printf("%d\n", cnt);
	}
	
	return 0;
}