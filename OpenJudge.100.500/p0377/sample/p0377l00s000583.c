#include <stdio.h>

int main(void){
	int n, mark, rank;
	int m, r;
	char ch[32];

	int card [4] [13];

	for(m = 0; m < 4; m++){
		for(r = 0; r < 13; r++){
			card [m] [r] = 0;
		}
	}

	scanf("%d", &n);

	for(m = 0; m < n; m++){
		scanf("%s %d", ch, &rank);

		if(ch[0] == 'S') mark = 0;
		else if(ch[0] == 'H') mark = 1;
		else if(ch[0] == 'C') mark = 2;
		else if(ch[0] == 'D') mark = 3;

		card [mark] [rank - 1] = 1;
	}

	for(m = 0; m < 4; m++){
		for(r = 0; r < 13; r++){
			if (card [m] [r] == 0){
				switch(m){
				case 0 : putchar('S'); break;
				case 1 : putchar('H'); break;
				case 2 : putchar('C'); break;
				case 3 : putchar('D'); break;
				}

				printf(" %d\n", r + 1);
			}
		}
	}

	return 0;
}