#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x;
    int y;
    scanf("%d",&x);

    y=x%10;
    
    switch (y)
    {
    case 0:
    printf("pon");
    break;
    
    case 1:
    printf("pon");
    break;

    case 2:
    printf("hon");
    break;

    case 3:
    printf("bon");
    break;

    case 4:
    printf("hon");
    break;

    case 5:
    printf("hon");
    break;

    case 6:
    printf("pon");
    break;

    case 7:
    printf("hon");
    break;

    case 8:
    printf("pon");
    break;

    case 9:
    printf("hon");
    break;
    }
}