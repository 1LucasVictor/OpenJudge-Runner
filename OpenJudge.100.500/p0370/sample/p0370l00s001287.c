#include <stdio.h>

int main()
{
    int a;
    int b;
    char op;
    int ret;

    while(1)
    {
        fflush(stdin);
        ret = scanf("%d %[+\\-*/?] %d", &a, &op, &b);
        /*
        printf("ret = %d\n", ret);
        printf("a = %d\n", a);
        printf("op = %c\n", op);
        printf("b = %d\n", b);
        */
        
        if (op == '?')
        {
            break;
        }
        else if (op == '+')
        {
            printf("%d\n", a + b);
        }
        else if (op == '-')
        {
            printf("%d\n", a - b);
        }
        else if (op == '*')
        {
            printf("%d\n", a * b);
        }
        else if (op == '/')
        {
            printf("%d\n", a / b);
        }
    }

    return 0;
}