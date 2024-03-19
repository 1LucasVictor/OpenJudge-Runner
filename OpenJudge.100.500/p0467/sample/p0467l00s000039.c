#include<stdio.h>

int main() {
	int card1 = 0;
	int card0 = 0;
	int cardm1 = 0;
	int number = 0;

	scanf("%d %d %d %d", &card1, &card0, &cardm1, &number);

	if (card1 >= number) {
		printf("%d", number);
	}
	else if(card1 + card0 >= number){
		printf("%d", card1);
	}
	else {
		printf("%d", card1 - (number - card1 - card0));
	}

	return 0;
}