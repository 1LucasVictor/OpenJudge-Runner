#include<stdio.h>
int main()
{
    int X,A;
    scanf("%d %d",&X,&A);
    if(0<=X&&X<=9&&0<=A&&A<=9)
    {
        if(X<A)
        {
            printf("0\n");
        }
        else
        {
            printf("10\n");
        }
    }
    return 0;
}