#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0, b = 0, rest = 0;

    scanf("%d %d", &a, &b);
    rest = 16 - (a+b);
    if ((a+b) > 16) {
        printf(":(\n");
    } else {
        if (a > 8 || b > 8) {
            printf(":(\n");
        } else {
            printf("Yay!\n");
        }
    }
    return 0;
}
