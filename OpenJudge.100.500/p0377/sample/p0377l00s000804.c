#include <stdio.h>
#define DECK 52

typedef struct Cards
{
	char suit;
	int rank;
	int flag;
}cards;

int main(void)
{
	int numofcard;

	cards cards[DECK];
	
	for(int i = 0; i < DECK; i++){
		if(i < 13){
			cards[i].suit = 'S';
			cards[i].rank = i + 1;
			cards[i].flag = 0;
		}
		else if(i < 26){
			cards[i].suit = 'H';
			cards[i].rank = i - 12 ;
			cards[i].flag = 0;
		}
		else if(i < 39){
			cards[i].suit = 'C';
			cards[i].rank = i - 25;
			cards[i].flag = 0;
		}
		else{
			cards[i].suit = 'D';
			cards[i].rank = i - 38;
			cards[i].flag = 0;
		}
	}
	
	scanf("%d", &numofcard);
	
	for(int k = 0; k < numofcard; k++){
		char ussuit;
		int usrank;
		scanf(" %c %d", &ussuit, &usrank);
		for(int j = 0; j < DECK; j++){
			if(cards[j].suit == ussuit && cards[j].rank == usrank) cards[j].flag = 1;
		}
	}
	
	//putchar('\n');
	for(int i = 0; i < DECK; i++){
		
		if(cards[i].flag == 0){
			printf("%c %d", cards[i].suit, cards[i].rank);
		}
		else{
			continue;
		}
		printf("\n");
	}
	//putchar('\n');
	return 0;
}

