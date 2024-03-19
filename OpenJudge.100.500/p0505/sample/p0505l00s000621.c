#include <stdio.h>

int main(void)
{

    long l_monsterHP;
    int i_skillNum;
    int i_skillDetail;
    long l_totalDamage = 0;

    scanf("%ld%d", &l_monsterHP, &i_skillNum);

    for (int count = 0; count < i_skillNum; count++)
    {
        scanf("%d", &i_skillDetail);
        l_totalDamage += i_skillDetail;
    }

    if (l_totalDamage >= l_monsterHP)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

}