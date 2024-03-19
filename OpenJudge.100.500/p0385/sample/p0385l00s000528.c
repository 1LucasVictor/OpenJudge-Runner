#include <stdio.h>

int main()
{
        long x;
        while(1) {
                scanf("%ld", &x);

                if (x == 0) break;

                int result = 0;
                while (x != 0) {
                                result += x % 10;
                                x /= 10;
                }
                printf("%d\n", result);
        }
}
