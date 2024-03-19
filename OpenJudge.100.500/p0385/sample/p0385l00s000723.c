#include <stdio.h>
#include <string.h>
int main()
{
    char s;
    do
    {
        int sum = 0;
        do
        {
            scanf("%c", &s);
            if (s == '\n')
            {
                break;
            }
            sum = sum + s - '0';
        } while (s != '\n');
        if (sum == 0)
        {
            break;
        }
        printf("%d\n", sum);
    } while (s != 0);
    return 0;
}
