#include <stdio.h>
#include <math.h>

int main () {
    int tmp, cnt = 0;

    int s;
    scanf("%d", &s);

    for (int i = 2; 0 <= i; i--) {
        tmp = s / pow(10, i);
        cnt += tmp;
        s -= tmp * pow(10, i);
    }

    printf("%d\n", cnt);

    return 0;
}