#include <stdio.h>
#include <math.h>
int main(void)
{
    char S[3];
    scanf("%s", S);

    if (S[1] == 'B')
    {
        printf("ARC\n");
    }
    else
    {
        printf("ABC\n");
    }

    return 0;
}