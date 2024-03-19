#include <stdio.h>
#include <string.h>

void shuffle(char *cards, int h) //sのh文字目までをs1,sのh文字目以降をs2コピーし、順番を入れ替えて連結
{
    // char s1[201] = {0};
    // strncpy(s1, cards, h);
    char s2[201] = {0};
    int len = strlen(cards);
    strcpy(s2, (cards + h));
    strncpy((s2 + (len - h)), cards, h);
    //strcat(s2, s1);
    strcpy(cards, s2);
}

int main(void)
{
    while (1)
    {
        char cards[201];
        scanf("%s", cards);
        if (cards[0] == '-')
        {
            break;
        }
        int m;
        scanf("%d", &m);
        for (int i = 0; i < m; i++)
        {
            int h;
            scanf("%d", &h);
            shuffle(cards, h);
        }
        printf("%s\n", cards);
    }

    return 0;
}

