#include <stdio.h>

int main()
{
    int monsterHealth, attacksDone, attacksAmount, isKilled;
    scanf("%d %d",&monsterHealth, &attacksDone);

    attacksAmount = monsterHealth / attacksDone;
    isKilled = attacksAmount * attacksDone >= monsterHealth;

    if (!isKilled)
    {
        attacksAmount++;
    }

    printf("%d \n", attacksAmount);

    return 0;
}
