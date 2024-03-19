#include <stdio.h>
int a, b, ans;
char o;

int main()
{
    do
    {
        scanf("%d %c %d", &a, &o, &b);
        switch (o)
        {
        case '+':
            ans = a + b;
            break;
        case '-':
            ans = a - b;
            break;
        case '*':
            ans = a * b;
            break;
        case '/':
            ans = a / b;
            break;
        default:
            break;
        }
        if ((int)o != 63)
        {
        printf("%d\n", ans);
        }
        
    } while ((int)o != 63);
}

