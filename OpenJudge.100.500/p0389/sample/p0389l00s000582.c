#include<stdio.h>

void shuffle(char cards[], int m);

int main(void)
{
		char cards[200];
		int m;
		while(1)
		{
				scanf("%s", cards);
				if(cards[0] == '-')
				{
						break;
				}
				scanf("%d", &m);
				shuffle(cards, m);
		}
}



void shuffle(char cards[], int m)
{
		int num;
		for(num=0; cards[num]!='\0'; num++);

		int i, j;
		int h;
		char card;
		for(i=0; i<m; i++)
		{
				scanf("%d", &h);

				while(h>0)
				{
					card = cards[0];
					for(j=0; j<num-1; j++)
					{
							cards[j] = cards[j+1];
					}
					cards[num-1] = card;
					h--;
				}
		}
		printf("%s\n", cards);
}