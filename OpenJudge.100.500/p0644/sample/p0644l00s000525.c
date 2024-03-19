#include <stdio.h>
int main(void) {
int a, i, x, b, c, d;
scanf("%d", &a);
b = a / 100;
c = a / 10 % 10;
d = a % 100 % 10;
printf("%d\n", b + c + d);
return 0;
}