#include<stdio.h>

int main()
{
    int a, b, c,one,two;
    scanf("%d %d %d", &a, &b, &c);
    one = b;
    two = c;
    if(b+c>a)
    {
        one = a;
        two = c - (a - b);
    }
    else
    {
        one = b + c;
        two = 0;
    }
    printf("%d", two);

    return 0;
}