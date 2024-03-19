#include <stdio.h>

int main(void){
	int N;
	int p;

	scanf("%d", &N);

	if (N%2==0) { p = N/2; }
	else { p = N/2 + 1; }

	printf("%d\n", p);

	return 0;
}
