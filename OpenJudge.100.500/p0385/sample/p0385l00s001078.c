#include <stdio.h>

int main(void)
{
    char x[1001];
    int sum, i;

    while(scanf("%s", &x) != EOF)
    {
        if(x[0] == '0')
        {
            return 0;
        }

        sum = 0;

        for(i = 0; x[i] != '\0'; ++i)
        {
            sum += x[i] - '0';
        }

        printf("%d\n", sum);
    }
}