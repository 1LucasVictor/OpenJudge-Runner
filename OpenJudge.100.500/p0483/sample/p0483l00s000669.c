
#include <stdio.h>

void    check_seven(char *n)
{
    int i;
    int flag;

    i = 0;
    flag = 0;
    while (n[i] != 0)
    {
        if (n[i] == '7')
        {
            flag = 1;
        }
        i++;
    }
    if (flag == 1)
    {
        printf("Yes");
    }
    else if (flag == 0)
    {
        printf("No");
    }
    
}

int     main()
{
    char input[4];

    scanf("%s", input);
    check_seven(input);
    return 0;
}
