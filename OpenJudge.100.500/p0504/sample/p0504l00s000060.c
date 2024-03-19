#include <stdio.h>

int main(void)
{

    int i_monsterHP;
    int i_attackNum;
    int i_attackCount = 0;

    scanf("%d%d", &i_monsterHP, &i_attackNum);

    while (i_monsterHP > 0) {
        i_monsterHP -= i_attackNum;
        i_attackCount++;
    }

    printf("%d", i_attackCount);

}