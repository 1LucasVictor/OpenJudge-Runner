#include <stdio.h>
#include <string.h>

int main()
{

    char S[3];
    scanf("%s", S);

    if (0 == strcmp(S, "BBB") || 0 == strcmp(S, "AAA"))
        printf("No");
    else
        printf("Yes");

    return 0;
}