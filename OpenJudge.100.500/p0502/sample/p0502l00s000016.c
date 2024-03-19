#include <stdio.h>

int n = 0;

int main(int argc, char const *argv[])
{
    scanf("%d", &n);

    int a[n];
    int check = 0;
    int count = 0;
    int i = 0;

    for (i = 0; i < n; i++)
    {
        a[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            count++;
            if (a[i] % 3 == 0 || a[i] % 5 == 0)
            {
                check++;
            }
        }
    }

    if (check == count)
    {
        printf("APPROVED\n");
    }
    else
    {
        printf("DENIED\n");
    }

    return 0;
}
