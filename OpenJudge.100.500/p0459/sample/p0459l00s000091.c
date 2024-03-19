#include <stdio.h>

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    for (int i = 0; i <= X; i++)
    {
        for (int j = X; j >= 0; j--)
        {
            if (j*4 + i*2 == Y)
            {
                printf("Yes\n");
                return 0;
            }
        }
    }
    printf("No\n");
    return 0;
}