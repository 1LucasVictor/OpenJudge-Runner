#include <stdio.h>
#define np number_of_weapons
#define ta total_attacks
#define td total_damage

int main()
{
    int health, np, ta, i, td;

    scanf("%d%d", &health, &np);
    int damage[np];

    td = 0;
    for (i = 0; i < np; i++)
    {
        scanf("%d", &damage[i]);
        td += damage[i];
    }

    if (td >= health)
        printf("Yes");
    else
        printf("No");
}