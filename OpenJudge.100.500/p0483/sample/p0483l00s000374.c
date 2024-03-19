#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    int a, b, c;
    a = input/100;
    b = input%100/10;
    c = input%100%10;
    
    if(a == 7 || b == 7 || c == 7)
    {
        printf("Yes\n");
    } else
    {
        printf("No\n");
    }

    return 0;
}