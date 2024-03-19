#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char str[1201] = {};
    if (fgets(str, sizeof(str), stdin))
    {
        for (char *elm = str; *elm; ++elm)
        {
            const char c = isupper(*elm) ? tolower(*elm) : islower(*elm) ? toupper(*elm) : *elm;
            printf("%c", c);
        }
    }
    return 0;
}
