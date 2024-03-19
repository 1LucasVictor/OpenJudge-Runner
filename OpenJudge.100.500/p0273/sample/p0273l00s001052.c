#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 50

int main() {
	int i, n, f[MAX];
	f[0] = 1;
	f[1] = 1;
	scanf("%d",&n);
	for (i = 2; i <= n; i++) {
		f[i] = f[i - 1] + f[i - 2];
	}
	printf("%d\n",f[n]);
    
    return 0;
}
