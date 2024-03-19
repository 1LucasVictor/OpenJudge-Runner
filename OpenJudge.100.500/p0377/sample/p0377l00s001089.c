#include <stdio.h>

int main(void){
	char trump[4][13] = {};
	char design[4] = {'S', 'H', 'C', 'D'};
	int n, i, j;

	scanf("%d", &n);
	getchar();
	for(i = 0; i < n; i++){
		char d;
		int r;

		scanf("%c %d", &d, &r);
		getchar();
		trump[(d-65) % 6][r-1] = 1;
	}

	for(i = 0; i < sizeof(trump)/sizeof(*trump); i++)
		for(j = 0; j < sizeof(*trump); j++)
			if(!trump[i][j])
				printf("%c %d\n", design[i], j+1);
}

