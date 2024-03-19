#include<stdio.h>

#define MAX_VALUE 20000
#define MIN_VALUE 0
#define IS_ERR(n) (n < MIN_VALUE || n > MAX_VALUE)


void print_output(int *data, int count)
{
    int i;
    for(i=0;i<count;i++) printf("%d\n", data[i]);
}

int main(void)
{

    int a, b;
    char op;

    while(1)
   {

        scanf("%d %c %d", &a, &op, &b);

       if(IS_ERR(a) || IS_ERR(b)) return -1;

        switch(op)
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
            case '?':
            default:
                return 0;
                break;
        }

    }

    return 0;
}
