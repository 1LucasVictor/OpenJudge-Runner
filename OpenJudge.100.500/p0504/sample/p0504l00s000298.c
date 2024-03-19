#include <stdio.h>

int main(int argc, char const *argv[])
{
    int hitpoint = 0;
    int damage = 0;
    int hit_count = 0;

    scanf("%d %d", &hitpoint, &damage);

    hit_count = hitpoint / damage;

    if (hitpoint % damage != 0)
    {
        hit_count++;
    }

    printf("%d\n", hit_count);

    return 0;
}
