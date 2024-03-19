#include <stdio.h>

int main()
{
	int monsterHP, attackPower, attacksAmount;
	scanf("%d %d", &monsterHP, &attackPower);

	// Counts how many attacks will take whole HP of the monster
	attacksAmount = monsterHP / attackPower;

	// Checks if attacks where enough to kill monster, if not then adds one more attack
	if (monsterHP % attackPower != 0)
	{
		attacksAmount++;
	}

	printf("%d\n", attacksAmount);

	return 0;
}
