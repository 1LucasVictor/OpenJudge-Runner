#include <stdio.h>

int main()
{
    int monsterHP, attacksDone, specialAttack;
    int attackPower = 0;
    scanf("%d %d", &monsterHP, &attacksDone);

    // Reads from input specialAttack
    for (int i = 0; i < attacksDone; i++)
    {
        scanf("%d", &specialAttack);
        // Adds 'power' of specialAttacks to basic attackPower of the monster
        attackPower += specialAttack;
    }

    if (attackPower >= monsterHP)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
