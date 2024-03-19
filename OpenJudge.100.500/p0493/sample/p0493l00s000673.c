#include <stdio.h>

int main(void)
{
    int yen, happiness = 0, temp;

    scanf("%d", &yen);

    if(yen >= 500)
    {
        temp = yen / 500;
        happiness = temp * 1000;
        yen -= temp * 500;
        temp = yen / 5;
        happiness += temp * 5;
    }
    else
    {
        temp = yen / 5;
        happiness = temp * 5;
    }

    printf("%d", happiness);

    return 0;
}