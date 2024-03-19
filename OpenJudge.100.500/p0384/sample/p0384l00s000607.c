#include<stdio.h>

int main()
{
        char c;

        while (1)
        {
                scanf("%c", &c);
                if (c >= 'A' && c <= 'Z')
                        printf("%c", c + 32);
                else if (c >= 'a' && c <= 'z')
                        printf("%c", c - 32);
                else if (c == '\n')
                        break;
                else
                        printf("%c", c);
        }
printf("\n");
        return 0;
}

