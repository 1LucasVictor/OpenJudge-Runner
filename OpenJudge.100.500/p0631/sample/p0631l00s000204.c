#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    if (a<=c && a + b >= c)
    {
        puts("YES");
    } else {
        puts("NO");
    }
}