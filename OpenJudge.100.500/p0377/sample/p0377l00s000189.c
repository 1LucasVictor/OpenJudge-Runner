#include <stdio.h>

int main(void) {
	int cards[4][14] = {0};
	int n, i, j, tmp;
	char c,c2;
	
	scanf("%d",&n);
	for (i = 0; i < n; ++i) {
		scanf(" %c %d%c",&c, &tmp, &c2);
		
		
		switch(c) {
		case 'S':
			cards[0][tmp] = 1;
			break;
		case 'H':
			cards[1][tmp] = 1;
			break;
		case 'C':
			cards[2][tmp] = 1;
			break;
		case 'D':
			cards[3][tmp] = 1;
			break;
		}
	}
	
	for (j = 0; j < 4; ++j) {
		for (i = 1; i < 14; ++i) {
			if (cards[j][i] == 1) {
				continue;
			}
			switch(j) {
			case 0:
				printf("S %d\n", i);
				break;
			case 1:
				printf("H %d\n", i);
				break;
			case 2:
				printf("C %d\n", i);
				break;
			case 3:
				printf("D %d\n", i);
				break;
			}
		}
	}
	return 0;
}