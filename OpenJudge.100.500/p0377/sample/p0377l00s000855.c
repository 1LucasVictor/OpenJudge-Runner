#include<stdio.h>
	int main()
{
	int n, i, j, card[4][13] = {0}, rank;
	char type;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf(" %c %d", &type, &rank);
		switch(type){
			case 'S' : card[0][rank - 1] += 1;
			break;
			case 'H' : card[1][rank - 1] += 1;
			break;
			case 'C' : card[2][rank - 1] += 1;
			break;
			case 'D' : card[3][rank - 1] += 1;
			break;
		}
		rank -= rank;
	}
	for(i = 0; i < 4; i++){
		for(j = 0; j < 13; j++){
			if(card[i][j] == 0){
					switch(i){
						case 0 : printf("S %d\n", j+1);
						break;
						case 1 : printf("H %d\n", j+1);
						break;
						case 2 : printf("C %d\n", j+1);
						break;
						case 3 : printf("D %d\n", j+1);
						break;
					}
			}
		}
	}
	return 0;
}