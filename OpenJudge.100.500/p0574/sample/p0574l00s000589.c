#include <stdio.h>

int main(void)
{
    char num[5];
    if (scanf("%s", num) != -1)
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