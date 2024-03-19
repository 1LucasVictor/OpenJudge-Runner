#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int ans = 0;
    if (b<=c || d<=a) {
        ans = 0;
    } else if (a<=c && c<=b && b<=d) {
        ans = b-c;
    } else if (c<=a && a<=d && d<=b) {
        ans = d-a;
    } else if (a<=c && d<=b) {
        ans = d-c;
    } else {
        ans = b-a;
    }
    printf("%d\n", ans);
    return 0;
}
