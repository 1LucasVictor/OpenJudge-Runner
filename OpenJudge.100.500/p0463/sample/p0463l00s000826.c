#include<stdio.h>
#include<string.h>

int main()
{
    int n = 0;
    int bottom = 0;

    scanf("%d", &n);

    bottom  = n % 10;

    if (bottom == 3)
    {
        printf("bon");
    } else if (((bottom == 0)||(bottom == 1))||((bottom == 6)||(bottom == 8))){
        printf("pon");
    } else {
        printf("hon");
    }  

    return 0;
}