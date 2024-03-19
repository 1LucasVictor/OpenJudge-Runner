#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d", &a);    scanf("%d", &b);
    int n = 1;
    if (b == 1) {
        printf("%d\n", 0);
    } else if (a >= b) {
        printf("%d\n", n);
    } else {
        int dif = b - a;
        int k;
        if (dif % (a - 1) == 0) {
            k = dif / (a - 1);
        } else {
            k = dif / (a - 1) + 1;
        }
        n += k;
        printf("%d\n", n);
    }
    
    return 0;
}
