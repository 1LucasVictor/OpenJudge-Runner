#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char s[1200];
    
    fgets(s, sizeof(s), stdin);
    char *p = s;
    do {
        if (islower(*p))
            *p = toupper(*p);
        else
            *p = tolower(*p);
    } while (*(++p));
    printf("%s", s);

    return 0;
}

