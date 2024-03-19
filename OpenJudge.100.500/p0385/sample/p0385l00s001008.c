#include <stdio.h>

int main()
{
        double x;
        while(1) {
                scanf("%lf", &x);

                if (x == 0) break;

                int result = 0;
                while (x != 0) {
                                result += (int)x % 10;
                                x /= 10;
                }
                printf("%d\n", result);
        }
}
