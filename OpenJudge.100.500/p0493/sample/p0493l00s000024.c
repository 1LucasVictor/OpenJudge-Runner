#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int a, b;
    a = x / 500;
    b = x % 500;
    b = b / 5;
    printf("%d", 1000 * a + b*5);
    return 0;
}
