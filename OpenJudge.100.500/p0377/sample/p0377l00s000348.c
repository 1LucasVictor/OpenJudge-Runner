#include <stdio.h>

int main(void){

	int cardS[13] = { 0 };
	int cardH[13] = { 0 };
	int cardC[13] = { 0 };
	int cardD[13] = { 0 };
	char suits;
	int rank;
	int n, i;

	scanf("%d", &n);

	for (i = 1; i <= n; i++){
		
		scanf(" %c %d", &suits, &rank);

		if (suits == 'S'){
			cardS[rank - 1] = 1;
		}else if (suits == 'H'){
			cardH[rank - 1] = 1;
		}else if (suits == 'C'){
			cardC[rank - 1] = 1;
		}else if (suits == 'D'){
			cardD[rank - 1] = 1;
		}
	}

	for (i = 1; i <= 13; i++){
		if (cardS[i-1] == 0){
			printf("%c %d\n", 'S', i);
		}
	}
	for (i = 1; i <= 13; i++){
		if (cardH[i - 1] == 0){
			printf("%c %d\n", 'H', i);
		}
	}
	for (i = 1; i <= 13; i++){
		if (cardC[i - 1] == 0){
			printf("%c %d\n", 'C', i);
		}
	}
	for (i = 1; i <= 13; i++){
		if (cardD[i - 1] == 0){
			printf("%c %d\n", 'D', i);
		}
	}
	return 0;
}