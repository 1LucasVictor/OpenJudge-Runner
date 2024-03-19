#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

int main(void){
	int n;/*cards you have*/
	int rank;
	int i,j;
	char mark[256];
	int cards[4][13];

	/*insert FALSE*/
	for(i = 0;i < 4;i++){
		for(j = 0;j < 13;j++){
			cards[i][j] = FALSE;
		}
	}

	scanf("%d", &n);

	if(n > 52){
		return 0;
	}

	/*check cards you have*/
	for(i = 0;i < n;i++){
		scanf("%s %d", mark, &rank);
		if(rank >= 1 && rank <= 13){
			if(strcmp(mark,"S") == 0){
				cards[0][rank - 1] = TRUE;
			}else if(strcmp(mark,"H") == 0){
				cards[1][rank - 1] = TRUE;
			}else if(strcmp(mark,"C") == 0){
				cards[2][rank - 1] = TRUE;
			}else if(strcmp(mark,"D") == 0){
				cards[3][rank - 1] = TRUE;
			}else{
				return 0;
			}
		}else{
			return 0;
		}
	}

	/*output cards you dont have*/
	for(i = 0;i < 4;i++){
		for(j = 0;j < 13;j++){
			if(cards[i][j] == FALSE){
				switch(i){
					case 0:
						printf("S");
						break;
					case 1:
						printf("H");
						break;
					case 2:
						printf("C");
						break;
					case 3:
						printf("D");
						break;
					default:
						break;
				}
				printf(" %d\n", j + 1);
			}
		}
	}

	return 0;
}