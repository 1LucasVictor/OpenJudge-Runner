#include <stdio.h>

void input(int [4][13]);
void init_card(int cardset[4][13]);
void check_cardset(int cardset[4][13]);

//void input(int **);
int main(void)
{

	int  in_cardset[4][13];
	init_card(in_cardset);
	input(in_cardset);
	check_cardset(in_cardset);
	
	return 0;
}

void init_card(int cardset[][13])
{

	for (int s=0; s<4; s++)
		for (int n=0; n<13; n++)
			cardset[s][n] = 0;
}

void input(int cardset[][13])
//	void input(int **cardset)
{
	char suit[3];
	char number[3];
	int numcards = 0;
	int s = 0;
	int n = 0;
	scanf("%d", &numcards);
	
	while(numcards--){
		
		//scanf("%2s %2s%*[^\n]", suit, number);
		scanf("%2s %2s", suit, number);
		// debug
		//printf("%s %s, ", suit, number); 
		switch(suit[0]){
		case 'S':s = 0; break;
		case 'H':s = 1; break;
		case 'C':s = 2; break;
		case 'D':s = 3; break;
		default:s=-1;
		}
		sscanf(number, "%d", &n);
		// something needed for error input handling
		cardset[s][n-1]=1;
		// debug
		//printf("cardset[%d][%d] was set\n", s, n);
	}
}

void check_cardset(int cardset[4][13])
{
	char c;
	for(int s=0; s<4; s++)
	for(int n=0; n<13; n++){
		if(cardset[s][n] == 0){
			switch(s){
				case 0:c = 'S'; break;
				case 1:c = 'H'; break;
				case 2:c = 'C'; break;
				case 3:c = 'D'; break;
			}
			printf("%c %d\n", c, n+1);
		}
	}
}

