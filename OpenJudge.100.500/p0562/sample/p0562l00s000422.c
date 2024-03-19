#include <stdio.h>

int main() {

	//Cを求める最小の個数とする。
	int A, B, C;


	int count = 1;
	int i = 1;

	scanf("%d %d", &A, &B);

	C = 0;
	while (count == 1) {

		if (B <= A + C * (A - 1)) {
			break;
		}
		
		C++;

	}

	printf("%d\n", C+1);
	return 0;
}