#include <stdio.h>
int main()
{
    int i, j, n;
    char c;
    while (1)
    {
        scanf("%c", &c);
        if (c >= 'a' && c <= 'z')
        {
            c = c - 32;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            c = c + 32;
        }
        printf("%c", c);
        if (c == '\n')
        {
            break;
        }
    }
    return (0);
}
