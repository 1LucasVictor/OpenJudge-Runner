#include <stdio.h>

#define SPADE 0
#define HEART 1
#define CLUB 2
#define DIAMOND 3

int main(void)
{
    int n;
    int cards[4][14];
    int i, j, number;
    char picture;

    // Initialization
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 14; j++)
        {
            cards[i][j] = 0;
        }
    }

    scanf("%d\n", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%c %d\n", &picture, &number);
        // printf("picture = %c number = %d\n", picture, number);
        if (picture == 'S')
            cards[SPADE][number]++;
        else if (picture == 'H')
            cards[HEART][number]++;
        else if (picture == 'C')
            cards[CLUB][number]++;
        else if (picture == 'D')
            cards[DIAMOND][number]++;
    }

    // Chcek if the input was successful
    // for (i = 0; i < 4; i++)
    // {
    //     for (j = 1; j < 14; j++)
    //     {
    //         printf("cards[%d][%d] = %d\n", i, j, cards[i][j]);
    //     }
    // }

    for (i = 0; i < 4; i++)
    {
        for (j = 1; j < 14; j++)
        {
            if (cards[i][j] == 0)
            {
                if (i == SPADE)
                    printf("S %d\n", j);
                else if (i == HEART)
                    printf("H %d\n", j);
                else if (i == CLUB)
                    printf("C %d\n", j);
                else if (i == DIAMOND)
                    printf("D %d\n", j);
            }
        }
    }
    return (0);
}
