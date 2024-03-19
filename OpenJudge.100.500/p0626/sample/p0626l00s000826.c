#include <stdio.h>

int main()
{
        int D = 0;
        int N = 0;

        scanf ("%d %d", &D, &N);

        switch(D)
        {
                case 0:
                        printf ("%d\n", 1 * N);
                        break;
                case 1:
                        printf ("%d\n", 100 * N);
                        break;
                case 2:
                        printf ("%d\n", 10000 * N);
                        break;
        }

        return 0;
}
