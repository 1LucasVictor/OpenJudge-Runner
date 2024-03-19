#include <stdio.h>
int main() {
	int H, N, A[100000], i = 0, AD = 0;
	scanf("%d%d",&H,&N);
	while (i<N) {
		scanf("%d",&A[i]);
		AD = AD + A[i];
		i++;
	}
	if (AD>=H) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	return 0;
}