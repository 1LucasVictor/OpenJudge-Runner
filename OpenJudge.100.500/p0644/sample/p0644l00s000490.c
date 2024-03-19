#include <stdio.h>

int main(void)
{
    int Sn,i,count = 0;

    scanf("%d", &Sn);

    for (i = 0; i < 3; i++)
    {
        if(Sn % 10 == 1)
        {
            count++;
        }

        Sn = Sn / 10;
    }
    printf("%d", count);

    return (0);
}
