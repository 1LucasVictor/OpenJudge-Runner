#include <stdio.h>

int main(int argc, char const *argv[])
{
    char S[20], T[20];
    scanf("%s", S);
    scanf("%s", T);
    size_t i = 0;
    while (S[i] != '\0')
    {
        if (S[i] != T[i])
        {
            printf("No\n");
            return 0;
        }
        i++;
    }
    if (T[++i] != '\0')
    {
            printf("No\n");
            return 0;
    }
    printf("Yes\n");
    return 0;
}
