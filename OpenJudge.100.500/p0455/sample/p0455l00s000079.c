#include <stdio.h>
 
int main () {
    int a, ans = 0;
    scanf("%d", &a);
    ans = a + a * a + a * a * a;
    printf("%d", ans);
    return 0;
}