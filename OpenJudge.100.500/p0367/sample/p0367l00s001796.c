#include <stdio.h>

int main()
{
    int a, b, c;
    int count;
    scanf("%d %d %d", &a, &b, &c);
    count = 0;
    for( ; a <= b ; a++) {
        if((c%a) == 0) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
