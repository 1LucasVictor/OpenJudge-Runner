#include <stdio.h>

int main()
{
	int monsterHealth, attackPower, attacksAmount, isKilled;
	scanf("%d %d", &monsterHealth, &attackPower);

	// Counts how many attacks will take whole HP of the monster
	attacksAmount = monsterHealth / attackPower;

	// Checks if attacks where enough to kill monster, if not then adds one more attack
	isKilled = attacksAmount * attackPower >= monsterHealth;
	if (!isKilled)
	{
		attacksAmount++;
	}

	printf("%d \n", attacksAmount);

	return 0;
}