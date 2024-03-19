#include <stdio.h>

int main(void)
{
    long long int a, b;
    long long int r, x, tmp;
    

    while (scanf("%d %d", &a, &b) != EOF){
        x = a * b;
        if (a < b){
            tmp = a;
            a = b;
            b = tmp;
        }

        r = a % b;
        while (r != 0){
            a = b;
            b = r;
            r = a % b;
        }
        printf("%d %d\n", b, x / b);

    }
    return (0);
}