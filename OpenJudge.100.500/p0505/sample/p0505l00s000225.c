#include <stdio.h>
#include <stdlib.h>

int main()
{
	int monsterHealth, attacksDone, specialAttack;
	long attackPower = 0;
	long specialAttacks[100000];
	scanf("%d""%d",&monsterHealth, &attacksDone);

	for (int i = 0; i < attacksDone; i++)
	{
		scanf("%d", &specialAttack);
		specialAttacks[i] = specialAttack;
	}

	for (int i = 0; i < attacksDone; i++)
	{
		attackPower += specialAttacks[i];
	}

	if (attackPower >= monsterHealth)
	{
		printf("Yes \n");
	}
	else
	{
		printf("No \n");
	}

	return 0;
}
