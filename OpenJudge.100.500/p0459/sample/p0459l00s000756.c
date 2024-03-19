#include <stdio.h>


int main(void)
{
    int X, Y, i;
    scanf("%d %d", &X, &Y);

    for (i = 0; i <= X; i++)
    {
        if (4 * X - 2 * i == Y)
        {
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    
    return 0;
}
	






