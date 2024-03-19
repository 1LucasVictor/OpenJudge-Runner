#include<stdio.h>
int main()
{
    int X,A;
    scanf("%d  %d",  &X, &A);

    if(0<=X||A<=9)
    {
        if(X<A)

            printf("0");

        else

            printf("10");

    }
    return 0;

}
