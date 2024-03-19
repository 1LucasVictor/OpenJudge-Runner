#include<stdio.h>

int main()
{
    int health,damage,total_attacks;

    scanf("%d%d",&health,&damage);

    total_attacks=health/damage;

    if ((health%damage!=0))
        total_attacks++;

    printf("%d",total_attacks);
    return 0;
}