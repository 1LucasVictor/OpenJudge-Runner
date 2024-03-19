#include <stdio.h>

int main ()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a >= 1 && a <= 16 && b >= 1 && b <= 16)
    {
        if(a + b <= 16)
        {
            if(a <= 8 && b <= 8)
            {
                printf("Yay !");
            }
            else
            {
                printf(":(");
            }
        }
        else
        {
            printf(":(");
        }
    }
    return 0;
}
