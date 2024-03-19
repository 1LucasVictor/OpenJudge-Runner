#include <stdio.h>

int main()
{
    int antenas[5], K, aux;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &antenas[i]);
    }
    scanf("%d", &K);
    for (int i = 0; i < 5; i++)
    {
        for (int j = (i + 1); j < 5; j++)
        {
            if (antenas[i] > antenas[j])
            {
                aux = antenas[i];
                antenas[i] = antenas[j];
                aux = antenas[j];
            }
        }
    }

    if ((antenas[4] - antenas[0]) < K)
        printf("Yay!");
    else
        printf(":(");
    return 0;
}