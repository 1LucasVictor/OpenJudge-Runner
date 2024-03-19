#include<stdio.h>

int main(){

	int card[4][13];
	int B,i,j,k;
	char A;
	int n;

	for (i = 0; i < 4; i++){
		for (j = 0; j < 13; j++){
			card[i][j] = 0;
		}
	}
	scanf("%d", &n);
	for (k = 0; k < (2*n); k++){
		scanf("%c %d", &A, &B);
		if (A == 'S'){ card[0][B-1] = 1; }
		else if (A == 'H'){ card[1][B-1] = 1; }
		else if (A == 'C'){ card[2][B-1] = 1; }
		else if (A == 'D'){ card[3][B-1] = 1; }
	}

		for (i = 0; i < 4; i++){
			for (j = 0; j < 13; j++){
				if (card[i][j] == 0){
					if (i == 0){ printf("S %d\n", j + 1); }
					else if (i == 1){ printf("H %d\n", j + 1); }
					else if (i == 2){ printf("C %d\n", j + 1); }
					else if (i == 3){ printf("D %d\n", j + 1); }
				}
			}
		}
	
	return 0;

}
