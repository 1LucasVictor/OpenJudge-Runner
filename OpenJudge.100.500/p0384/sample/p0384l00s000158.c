#include <stdio.h>

int main(void)
{
    char input;
    while(scanf("%c", &input) != EOF)
    {
        if(input >= 'a' && input <= 'z')
        {
            input = input - 'a' + 'A';
        }

        else if(input >= 'A' && input <= 'Z')
        {
            input = input - 'A' + 'a';
        }

        printf("%c", input);
    }

    return 0;
}