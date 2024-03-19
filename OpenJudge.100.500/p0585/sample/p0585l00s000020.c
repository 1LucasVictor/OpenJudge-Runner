#include <stdio.h>

int main(void){

    int a, b, t, count, ans;
    scanf("%d %d %d", &a, &b, &t);

    count = t / a;
    ans = count * b;
    printf("%d", ans);

    return 0;
}
