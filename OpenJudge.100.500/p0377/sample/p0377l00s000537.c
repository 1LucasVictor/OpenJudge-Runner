/*氏名：保坂優介, 学籍番号：200441141
  概要：無いカードを表示する*/

#include<stdio.h>

int char_to_int(char suit)
{
    int suit_num;
    if (suit == 'S')
    {
        suit_num = 0;
    }
    if (suit == 'H')
    {
        suit_num = 1;
    }
    if (suit == 'C')
    {
        suit_num = 2;
    }
    if (suit == 'D')
    {
        suit_num = 3;
    }
    return suit_num;
}

char int_to_char(int suit_num)
{
    char suit;
    if (suit_num == 0)
    {
        suit = 'S';
    }
    if (suit_num == 1)
    {
        suit = 'H';
    }
    if (suit_num == 2)
    {
        suit = 'C';
    }
    if (suit_num == 3)
    {
        suit = 'D';
    }
    return suit;
}

int main(void)
{
    int i, j, k, n, rank, suit_num, junk, N_A[4][14] = {0};
    char suit;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%c%c%c%d", &junk, &suit, &junk, &rank);

        suit_num = char_to_int(suit);

        N_A[suit_num][rank] = 1;
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 1; j <= 13; j++)
        {
            if (N_A[i][j] == 0)
            {
                suit = int_to_char(i);

                printf("%c %d\n", suit, j);
            }
        }
    }


    return 0;
}
