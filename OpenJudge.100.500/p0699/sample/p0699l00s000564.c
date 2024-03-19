#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b + c == 17 && a*b*c == 5 * 7 * 5)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}