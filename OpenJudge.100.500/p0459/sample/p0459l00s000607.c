#include<stdio.h>

int main(void)
{
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(b % 2 != 0){
        printf("No");
        return 0;
    }
    int b4 = (b+3)/4;
    int b2 = b / 2;
    if(a <= b2 && a >= b4)
    {
        printf("Yes");
        return 0;
    }
    printf("No");
    return 0;
}