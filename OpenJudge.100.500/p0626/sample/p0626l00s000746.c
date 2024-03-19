#include <stdio.h>

int main ()
{
    int d, n, resultado;
    scanf("%d %d", &d, &n);
    if ((d == 0 || d == 1 || d == 2) && (n >= 1 && n <= 100))
    {
        if (d == 0)
        {
            for (int i = 1; i <= n; i++)
            {
                resultado = i;
            }
            printf("%d\n", resultado);
        }
        if (d == 1)
        {
            for (int i = 1; i <= n; i++)
            {
                resultado = i * 100;
            }
            printf("%d\n", resultado);
        }
        if (d == 2)
        {
            for (int i = 1; i <= n; i++)
            {
                resultado = i * 10000;
            }
            printf("%d\n", resultado);
        }
    }
    return 0;
}
