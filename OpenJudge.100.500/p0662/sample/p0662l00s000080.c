#include <stdio.h>

int main(int argc, const char * argv[])
{
    int A,B,C,D;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);
    if(A <= C)
    {
        if(B <= C)
        {
            printf("0");
        }
        else
        {
            if(D <= B)
            {
                printf("%d",D - C);
            }
            else
            {
                printf("%d",B - C);
            }
        }
    }
    else
    {
        if(D <= A)
        {
            printf("0");
        }
        else
        {
            if(D >= B)
            {
                printf("%d",B - A);
            }
            else
            {
                printf("%d",D - A);
            }
        }
    }
    return 0;
}
