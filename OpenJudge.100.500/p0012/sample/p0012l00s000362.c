#include <stdio.h>

int main(void)
{
    int train[16];
    int n;
    int len = 0;

    while (scanf("%d", &n) != EOF){
        if (n == 0){
            printf("%d\n", train[len]);
            len--;
        }
        else {
            len++;
            train[len] = n;
        }
    }

    return (0);
}