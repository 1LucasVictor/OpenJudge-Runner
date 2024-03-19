#include<stdio.h>
int main()
{
    int X;
    scanf("%d", & X);

    while (X!=-40 && X>=40)
        scanf("%d", & X);

    if (X>=30)
        printf("Yes");
    else
        printf("No");





}