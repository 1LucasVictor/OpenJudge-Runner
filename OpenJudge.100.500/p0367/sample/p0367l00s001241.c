#include <stdio.h>
 
int main(void) {
    int a, b, c, x;
    scanf("%d %d %d", &a, &b, &c);
    for(x = 0; a <= b; c % a++ || x++);
    printf("%d\n", x);
    return 0;
}