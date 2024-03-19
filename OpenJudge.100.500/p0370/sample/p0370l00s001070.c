#include <stdio.h>

int     main(void)
{
    int a, b;
    int i;
    char op;
    
    i = 0;
    while (i < 20000)
    {
        scanf("%d %c %d", &a, &op, &b);
    
        if (op == '+')
            printf("%d\n", a + b);
        else if (op =='*')
            printf("%d\n", a * b);
        else if (op =='/')
            printf("%d\n", a / b);
        else if (op =='-')
            printf("%d\n", a - b);
        else
            break;
        i++;
    }
    return (0);
}
