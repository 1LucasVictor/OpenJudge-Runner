#include<stdio.h>
int main()
{
    char op;
    int a, b, f;
    f = 0;
    while(1){
        scanf("%d %c %d", &a, &op, &b);
        switch(op){
            case '+':
                printf("%d\n", a + b);
                break;
            case '-':
                printf("%d\n", a - b);
                break;
            case '*':
                printf("%d\n", a * b);
                break;
            case '/':
                printf("%d\n", a / b);
                break;
            default:
                return 0;
        }
    }
}
