#include <stdio.h>

int main()
{

    int s;
    scanf("%d", &s);
    s = s % 10;

    if (s==0 || s==6 || s==1 ||s==8)
    {
        printf("pon");
    }
    else if (s==3){
        printf("bon");
    }else
        printf("hon");

    printf("\n");
}