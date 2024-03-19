#include<stdio.h>
#ifdef DEBUG
#include<conio.h>
#endif // DEBUG


int main () {
#ifdef DEBUG
    freopen("input.txt", "r", stdin);
#endif // DEBUG

    int a, b;
    char op;

    while (scanf("%d %c %d", &a, &op, &b), '?' != op)
    {
        switch (op)
        {
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
        }
    }
    
#ifdef DEBUG
    getch();
#endif // DEBUG
    return 0;
}


