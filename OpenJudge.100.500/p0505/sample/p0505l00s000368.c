#include <stdio.h>

int main(int argc, char const *argv[])
{
    int hitpoint = 0;
    int number_skills = 0;
    int total_damage = 0;
    int i = 0;

    scanf("%d %d", &hitpoint, &number_skills);

    int skill[number_skills];

    for (i = 0; i < number_skills; i++)
    {
        skill[i] = 0;
        scanf("%d", &skill[i]);
        total_damage += skill[i];
    }

    if (total_damage >= hitpoint)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
