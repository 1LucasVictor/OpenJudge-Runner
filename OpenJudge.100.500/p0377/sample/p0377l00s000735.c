#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	int n;
	int card[4][14];
	char mark[2];
	int num;
	char *mark_str = "SHCD";
	
	memset(card, 0, sizeof(card));
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		scanf("%s%d", mark, &num);
		switch (mark[0]){
		case 'S':
			card[0][num] = 1;
			break;

		case 'H':
			card[1][num] = 1;
			break;

		case 'C':
			card[2][num] = 1;
			break;

		case 'D':
			card[3][num] = 1;
			break;
		}
	}
	
	for (i = 0; i <= 3; i++){
		for (j = 1; j <= 13; j++){
			if (card[i][j] == 0){
				printf("%c %d\n", mark_str[i], j);
			}
		}
	}
	
	return (0);
}


