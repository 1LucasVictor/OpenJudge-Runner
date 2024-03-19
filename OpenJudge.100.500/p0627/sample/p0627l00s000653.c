
#include <stdio.h>

int main(){
    int a, b, add, sub, mul;

    scanf("%d %d", &a, &b);

    add = a + b;
    sub = a - b;
    mul = a * b;

    if(sub <= add && mul <= add)
        printf("%d\n", add);
    else if(add <= mul && sub <= mul)
        printf("%d\n", mul);
    else
        printf("%d\n", sub);

    return 0;
}