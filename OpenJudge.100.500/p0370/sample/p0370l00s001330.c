#include<stdio.h>

int main(void)
{

    int a,b;
    char op;

    for(int i=0;i<=1000;i++)
    {
        scanf("%d %c %d", &a, &op, &b);
        if (op == '?')break;
        else if (op == '+')printf("%d\n", a + b);
        else if (op == '-')printf("%d\n", a - b);
        else if (op == '*')printf("%d\n", a * b);
        else if (op == '/')printf("%d\n", a / b);
    }

    return 0;
}
