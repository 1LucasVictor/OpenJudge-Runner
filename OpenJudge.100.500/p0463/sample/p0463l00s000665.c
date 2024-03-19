#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int i = n % 10;
    switch (i)
    {
    case 2:
    case 4:
    case 5:
    case 7:
    case 9:
        printf("hon\n");
        break;
    case 0:
    case 1:
    case 6:
    case 8:
        printf("pon\n");
        break;
    case 3:
        printf("bon\n");
        break;
    }

    return 0;
}