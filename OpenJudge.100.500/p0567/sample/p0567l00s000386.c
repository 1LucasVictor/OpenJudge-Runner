#include <stdio.h>

int main(void)
{
    int a, b, c, answer;
    scanf("%d %d %d", &a, &b, &c);
    answer = b + c - a;
    printf("%d", answer);
}