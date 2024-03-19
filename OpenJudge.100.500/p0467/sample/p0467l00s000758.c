#include <stdio.h>

int main(void)
{
	int cardA, cardB, cardC, numberOfCards;
	int sum;
	int Ai, Ci;

	scanf("%d", &cardA);
	scanf("%d", &cardB);
	scanf("%d", &cardC);
	scanf("%d", &numberOfCards);

	sum = 0;

	for (Ai = 0; Ai < cardA && Ai < numberOfCards; Ai++)
	{
		sum++;
	}

	for (Ci = 0; Ci < cardC && Ci + cardA +cardB < numberOfCards; Ci++)
	{
		sum--;
	}

	printf("%d\n", sum);

	return 0;
}