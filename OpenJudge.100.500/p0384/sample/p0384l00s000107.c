#include <stdio.h>
int main()
{
    char a;
    // gets(a);
    do
    {
        scanf("%c", &a);
        if (a >= 'a' && a <= 'z')
        {
            a = a - 32;
        }
        else if (a >= 'A' && a <= 'Z')
        {
            a = a + 32;
        }
        printf("%c", a);
    } while (a != '\n');
    return 0;
}
