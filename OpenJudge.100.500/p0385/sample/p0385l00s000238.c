#include <stdio.h>

int main()
{
    char number[1001];
    int  sum = 0;

    int i;
    for (i = 0; ; i++) {
        scanf("%c", &number[i]);
        if (number[0] == '0') {
            break;
        } else if (number[i] == '\n') {
            printf("%d\n", sum);
            i   = - 1;
            sum = 0;
        } else  {
            sum = sum + (number[i] - '0');
        }
    }
    return 0;
}

