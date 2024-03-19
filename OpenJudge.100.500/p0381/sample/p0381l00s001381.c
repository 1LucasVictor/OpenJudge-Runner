#include <stdio.h>
int main()
{
    int n, x;
    do
    {
         scanf("%d %d", &n, &x);
        if (n != 0 || x != 0)
        {
            int count = 0;
            for (int a = 1; a <= n; a++)
            {
                for (int b = 1; b <= n; b++)
                {
                    for (int c = 1; c <= n; c++)
                    {
                        if (a < b && b < c && a + b + c == x)
                        {
                            count=count + 1;
                        }
                    }
                }
            }

            printf("%d\n", count);
        }
    } while (n != 0 || x != 0);
    
    return 0;
}
