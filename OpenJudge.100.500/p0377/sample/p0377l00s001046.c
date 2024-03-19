/* ITP1_6_B:Finding Missing Cards */
/* 20181122 AOJ */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int A[4][13] = {0};
	int n = 0;
	int i, j, m;
	char ch;

	scanf("%d", &n);
	while(n--) {
		getchar();
		scanf("%c %d", &ch, &m);
		switch(ch) {
			case 'S' : A[0][m - 1] = 1; break;
			case 'H' : A[1][m - 1] = 1; break;
			case 'C' : A[2][m - 1] = 1; break;
			case 'D' : A[3][m - 1] = 1; break;
			default  : break;
		}
	}

	for(i = 0; i < 4; i++) {
		for(j = 0; j < 13; j++) {
			if(A[i][j] == 0) {
				switch(i) {
					case 0 : printf("S %d\n", j + 1); break;
					case 1 : printf("H %d\n", j + 1); break;
					case 2 : printf("C %d\n", j + 1); break;
					case 3 : printf("D %d\n", j + 1); break;
					default : break;
				}
			}
		}
	}

	return 0;
}
