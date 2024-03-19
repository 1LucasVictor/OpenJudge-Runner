#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int monsterHealth, attacksDone, attacksAmount;
	scanf("%d""%d",&monsterHealth, &attacksDone);

	attacksAmount = round(monsterHealth / attacksDone);

	if (attacksAmount * attacksDone < monsterHealth)
	{
		attacksAmount++;
	}

	printf("%d \n", attacksAmount);

	return 0;
}
