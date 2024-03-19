#include<stdio.h>
int main (){
	int card[5][14] = {0};
	int n,d,i,j;
	char c;

	scanf("%d",&n);

	for (j = 0;j < n; j++){
		scanf(" %c %d",&c,&d);
		if (c == 'S'){
			card[1][d] = 1;
		}
		if (c == 'H'){
			card[2][d] = 1;
		}
		if (c == 'C'){
			card[3][d] = 1;
		}
		if (c == 'D'){
			card[4][d] = 1;
		}
	}

	for (i = 1; i <= 4; i++){
		for (j = 1; j <= 13; j++){
			if (card[i][j] != 1)
			{
				if (i == 1){
					printf("S %d\n",j);
				}
				if (i == 2){
					printf("H %d\n",j);
				}
				if (i == 3){
					printf("C %d\n",j);
				}
				if (i == 4){
					printf("D %d\n",j);
				}
			}
		}
	}

	return 0;
}
