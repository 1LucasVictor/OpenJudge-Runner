#include <stdio.h>

int lost[4][13];

int main(void)
{
	int n;
	int i, j;
	int tmp_lost = 0;
	char mark;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		scanf("%*c%c %d", &mark, &tmp_lost);
		tmp_lost--;
		switch (mark){
			case 'S':
				lost[0][tmp_lost] = 1;
				break;
			
			case 'H':
				lost[1][tmp_lost] = 1;
				break;
			
			case 'C':
				lost[2][tmp_lost] = 1;
				break;
			
			case 'D':
				lost[3][tmp_lost] = 1;
				break;
		}
	}
	
	for (i = 0; i < 4; i++){
		for (j = 0; j < 13; j++){
			if (lost[i][j] != 1){
				switch (i){
					case 0:
						mark = 'S';
						break;
					
					case 1:
						mark = 'H';
						break;
						
					case 2:
						mark = 'C';
						break;
					
					case 3:
						mark = 'D';
						break;
				}
				printf("%c %d\n", mark, j + 1);
			}
		}
	}
	
	return (0);
}