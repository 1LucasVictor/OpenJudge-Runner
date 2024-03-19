#include <stdio.h>
int main()
{
    char n[4];
    scanf("%s", n);
    if (n[0] == '7' || n[1] == '7' || n[2] == '7')
    {
        printf("Yes\n");
    }
        else
        {
            printf("No\n");
        }

    return 0;
}