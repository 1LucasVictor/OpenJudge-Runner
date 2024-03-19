#include <stdio.h>

int main(void)
{
	int s[13] = {};
	int h[13] = {};
    int	c[13] = {};
	int d[13] = {};						//Cards.
	int deck, i;						//The number of cards Taro has.
	char mark, dummy;					//dummy is used for scanf().
	int num;							//Card number.

	scanf("%d", &deck);
	scanf("%c", &dummy);

	//Enter the cards.
	i = 0;
	while(i < deck)
	{
		scanf("%c %d", &mark, &num);
		switch(mark)
		{
			case 'S':
				s[num - 1] = 1;
				break;
			case 'H':
				h[num - 1] = 1;
				break;
			case 'C':
				c[num - 1] = 1;
				break;
			case 'D':
				d[num - 1] = 1;
				break;
		}
		scanf("%c", &dummy);
		i++;
	}

	//Display lost cards.
	i = 1;
	while(i <= 13)
	{
		if(s[i - 1] == 0)
			printf("S %d\n", i);
		i++;
	}
	i = 1;
	while(i <= 13)
	{
		if(h[i - 1] == 0)
			printf("H %d\n", i);
		i++;
	}
	i = 1;
	while(i <= 13)
	{
		if(c[i - 1] == 0)
			printf("C %d\n", i);
		i++;
	}
	i = 1;
	while(i <= 13)
	{
		if(d[i - 1] == 0)
			printf("D %d\n", i);
		i++;
	}

	return (0);
}

