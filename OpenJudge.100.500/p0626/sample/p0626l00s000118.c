#include<stdio.h>

int main() {
	int D, N,i;
	scanf("%d%d",&D,&N);

	if (N == 100) { N = 101; }

	for (i = D; i != 0; i--) {
		N = N * 100;
	}
	printf("%d",N);

}