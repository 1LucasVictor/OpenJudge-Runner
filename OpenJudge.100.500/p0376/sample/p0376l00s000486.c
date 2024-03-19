#include <stdio.h>
#include <stdlib.h>
 
void yosinaga_sayuri(int n) {
    int a;
    if (scanf("%d", &a) != 1) exit(1);
    if (n > 1) {
        yosinaga_sayuri(n - 1);
        putchar(' ');
    }
    printf("%d", a);
}
 
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 1;
    yosinaga_sayuri(n);
    putchar('\n');
    return 0;
}
