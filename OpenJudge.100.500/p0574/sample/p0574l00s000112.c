#include <stdio.h>

int main(void)
{
    int num[4];
    for (int i = 0; i < 4; i++)
    {
        int k;
        scanf("%d", &k);
        num[i] = k;
    }

    for (int i = 0; i < 3; i++)
    {
        if (num[i] == num[i + 1])
        {
            puts("Bad");
            break;
        }
        else if (num[i] != num[i + 1] && i == 2)
        {
            puts("good");
        }
    }

    return 0;
}