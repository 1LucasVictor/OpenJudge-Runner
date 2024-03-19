#include <stdio.h>

int main(void) {
	int j, n, N, c;
	char s;
	int a[4][13] = { 0 };
	scanf ("%d", &N);

	for (c = 0; c<N; c++){
		scanf(" %c %d", &s, &n);
		
		switch (s){
		case 'S':a[0][n - 1] = 1;
			break;
		case 'H':a[1][n - 1] = 1;
			break;
		case 'C':a[2][n - 1] = 1;
			break;
		case 'D':a[3][n - 1] = 1;
			break;
		}
	}
	for (j = 0; j<13; j++){
		if (a[0][j] == 0){printf("S %d\n", j + 1);}
	}
	for (j = 0; j<13; j++){
		if (a[1][j] == 0){printf("H %d\n", j + 1);}
	}
	for (j = 0; j<13; j++){
		if (a[2][j] == 0){printf("C %d\n", j + 1);}
	}
	for (j = 0; j<13; j++){
		if (a[3][j] == 0){printf("D %d\n", j + 1);}
	}
	return 0;
}