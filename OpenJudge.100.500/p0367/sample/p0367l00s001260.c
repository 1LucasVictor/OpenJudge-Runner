#include <stdio.h>

int main()
{
    int a, b, c;
    int i;
    int cnt = 0;

    scanf("%d %d %d", &a, &b, &c);

    for (i = 0; i <= b - a; i++)
    {
        if (c % (a + i) == 0)    cnt++;
    }
  
    printf("%d\n", cnt);

    return 0;
}