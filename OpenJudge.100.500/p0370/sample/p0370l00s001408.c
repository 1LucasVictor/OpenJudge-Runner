#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, t;
    char op;
    for(t = 1;t > 0;t++)
    {
        scanf("%d %c %d", &a, &op, &b);
        if(op =='+')
        {
            printf("%d\n",a + b);
        }
        else if(op =='-')
        {
            printf("%d\n",a - b);
        }
        else if(op =='*')
        {
            printf("%d\n",a * b);
        }
        else if(op =='/')
        {
            printf("%d\n",a / b);
        }
        else if(op =='?')
        {
            break;
        }
    }
    return 0;
}

