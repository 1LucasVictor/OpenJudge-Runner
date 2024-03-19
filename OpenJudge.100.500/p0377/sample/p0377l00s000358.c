#include <stdio.h>
int main(void){
	int i, j, n, suji;
	char cards[4][14] = { 0 }, mark;
	char suit[4] = { 'S', 'H', 'C', 'D' };

	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf(" %c", &mark);
		scanf("%d", &suji);
		switch (mark)
		{
		case 'S':cards[0][suji - 1] = 1; break;
		case 'H':cards[1][suji - 1] = 1; break;
		case 'C':cards[2][suji - 1] = 1; break;
		case 'D':cards[3][suji - 1] = 1; break;
		}
	}
	for (i = 0; i<4; i++){
		for (j = 0; j < 13; j++){
			if (cards[i][j] == 0){
				printf("%c %d\n", suit[i], j+1);
			}
		}
	}
	return 0;
}