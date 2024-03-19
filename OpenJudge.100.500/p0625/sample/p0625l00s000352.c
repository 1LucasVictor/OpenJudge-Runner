#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d",&a, &b);
    if(a + b > 16)
        printf(":(\n");
    else
        if(a > b+1 || b > a+1)
            printf(":(\n");
        else
            printf("Yay!\n");
        

    return 0;
}