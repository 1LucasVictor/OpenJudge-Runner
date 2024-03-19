#include <stdio.h>

int main(void)
{
    int N, D, result;

    scanf("%d %d", &D, &N);

    if (D <= 2 && D >= 0 && N <= 100 && N >= 1)
    {
        if (D != 0 && N < 100)
        {
            result = (N * 100);
            if (D == 2)
            {
                result = (result * 100);
            }
        }
        else if (D != 0 && N == 100)
        {
            if (D == 1)
            {
                result = N;
            }
            if (D == 2)
            {
                result = N * 100;
            }
        }
        else
        {
            result = N;
        }
        printf("%d\n", result);
    }
    else
    {
        printf("D is 0, 1 or 2 and N is between 1 and 100.\n");
    }
    return 0;
}