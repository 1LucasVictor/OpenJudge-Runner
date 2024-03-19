#include <stdio.h>


int main()
{

    char a[4];
    scanf("%s", a);

    int j = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == '7')
        {
            j = 1;
            break;
        }
    }

    if (j == 1)
        printf("Yes");
    else
    {
        printf("No");
    }

    printf("\n");
}