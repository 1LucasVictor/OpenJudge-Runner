#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[5];

    scanf("%s",s);
    // printf("%s",s);

    if (strcmp(s,"ABC")==0)
        printf("%s\n","ARC");
    else if (strcmp(s,"ARC")==0)
        printf("%s\n","ABC");

    return 0;
    

}