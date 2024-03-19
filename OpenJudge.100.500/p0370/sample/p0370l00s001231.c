#include <stdio.h>

int main()
{
    int x, y;
    char op;
    scanf("%d %c %d", &x, &op, &y);
    while (op != '?')
    {
        switch (op)
        {
        case '-':
            printf("%d\n", x - y);
            break;
        case '+':
            printf("%d\n", x + y);
            break;
        case '*':
            printf("%d\n", x * y);
            break;
        case '/':
            printf("%d\n", x / y);
            break;
        }
        scanf("%d %c %d", &x, &op, &y);
    }
}
