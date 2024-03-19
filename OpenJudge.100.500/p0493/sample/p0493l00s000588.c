#include <stdio.h>
#include <math.h>
int main()
{
    int x, point = 0;
    scanf("%d", &x);

    while(x > 499) {
        x -= 500;
        point += 1000;
    }
    while(x > 4) {
        x -= 5;
        point += 5;
    }

    printf("%d\n", point);
    return 0;
}
