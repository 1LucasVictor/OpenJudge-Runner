#include<stdio.h>
int main()
{
    int x, b, t;
    scanf("%d %d %d", &x, &b, &t);
    if(x>t)
    {
        printf("0");
    }
    else
    {
        printf("%d", (t/x)*b);
    }
    return 0;
}