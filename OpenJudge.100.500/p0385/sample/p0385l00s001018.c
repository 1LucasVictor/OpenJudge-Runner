#include <stdio.h>

int main(void)
{
    char number[100000];
    int total = 0;
    int i;

    while (1)
    {
        for (i = 0; i < 100000; i++)
        {
            scanf("%c", &number[i]);
            if ((i==0&&number[i] == '0') || number[i] == '\n')
                break;
            total += number[i] - '0';
        }
        if (i != 0)
            printf("%d\n", total);
        else
            break;
        total = 0;
        i = 0;
    }
    return 0;
}
