#include<stdio.h>
#include<stdlib.h>
int main () {
	int card[4][14];
	int cardNum;
	int number;
	char marks[4] = {'S' , 'H' , 'C' , 'D'};
	char mark;
	int i , s;

	for(i = 0; i < 4; i++) {
		for(s = 0; s < 14; s++) {
			card[i][s] = 0;
		}
	}
	scanf("%d" , &cardNum);
	getchar();
	for(i = 0; i < cardNum; i++) {
		scanf("%c %d" , &mark , &number);
		getchar();	
		if (mark == 'S') {
			card[0][number] = 1;
		}
		else if(mark == 'H') {
			card[1][number] = 1;
		}
		else if(mark == 'C') {
			card[2][number] = 1;
		}
		else if(mark == 'D') {
			card[3][number] = 1;
		}
	}

	for(i = 0; i < 4; i++) {
		for(s = 1; s <= 13; s++) {
			if (card[i][s] == 0) {
				printf("%c %d\n" , marks[i] , s);
			}
		}
	}

	return 0;
}