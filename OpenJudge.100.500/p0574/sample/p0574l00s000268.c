#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < 3; i++) {
        if (n % 10 == (n / 10) % 10) {
            puts("Bad");
            return 0;
        }

        n /= 10;
    }

    puts("Good");

    return 0;
}
