#include <stdio.h>

int main(void)
{
    int num1, num2, add;

    scanf("%d %d", &num1, &num2);

    add = num1 * num2;

    if(add % 2 == 0)
    {
        printf("Even");
    }

    else
    {
        printf("Odd");
    }

    return (0);
}
