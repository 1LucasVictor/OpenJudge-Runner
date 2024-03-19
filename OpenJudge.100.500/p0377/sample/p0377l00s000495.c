#include <stdio.h>

int main() {

	int n,i,S[13],H[13],C[13],D[13],number;

	char x,a;

	for (i = 0; i < 13; i++) {
		S[i] = H[i] = C[i] = D[i] = 0;
	}

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%c%c%d",&a, &x, &number);

		if (x == 'S') {
			S[number - 1] = 1;
		}
		else if (x == 'H') {
			H[number - 1] = 1;
		}
		else if (x == 'C') {
			C[number - 1] = 1;
		}
		else {
			D[number - 1] = 1;
		}
	}


	for (i = 0; i < 13; i++) {
		if (S[i] == 0) {
			printf("S %d\n", i + 1);
		}
	}
	for (i = 0; i < 13; i++) {
		if (H[i] == 0) {
			printf("H %d\n", i+1);
		}
	}
	for (i = 0; i < 13; i++) {
		if (C[i] == 0) {
			printf("C %d\n", i+1);
		}
	}
	for (i = 0; i < 13; i++) {
		if (D[i] == 0) {
			printf("D %d\n", i+1);
		}
	}
	
	return 0;

}
