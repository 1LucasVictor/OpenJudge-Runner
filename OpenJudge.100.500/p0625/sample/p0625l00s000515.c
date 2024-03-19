#include <stdio.h>

int main()
{
    int a,b,tmp,piece = 16;

    scanf("%d %d",&a,&b);

    if (b > a)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    piece -= (a + b);

    if (a - b > piece % 2)
    {
        puts(":(");
    }
    else
    {
        puts("Yay!");
    }
    
    
}