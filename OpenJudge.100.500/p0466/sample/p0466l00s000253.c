#include <stdio.h>

int main()
{
    int i = 0;
    char s1[12] = "";
    char s2[12] = "";
    int length1 = 0, length2 = 0;
    int flag = 1;

    scanf("%s", s1);
    scanf("%s", s2);

    for (i = 0; i < 10; i++)
    {
        if (s1[i] != '\0')
        {
            length1 += 1;
        }
        if (s2[i] != '\0')
        {
            length2 += 1;
        }
    }

    for (i = 0; i < length1; i++)
    {
        if (s1[i] != s2[i])
        {
            flag = 0;
            break;
        }
    }

    if (s2[i] < 'a' || s2[i] > 'z')
    {
        flag = 0;
    }
    else if (length2 != length1 + 1)
    {
        flag = 0;
    }

    if (flag)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}