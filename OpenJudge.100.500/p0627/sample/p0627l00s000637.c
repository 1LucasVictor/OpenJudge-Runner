#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    if (A==0 && B==0)
    {
        printf("0\n");
    }
    else if (A+B>=A-B && A+B>A*B)
    {
        printf("%d",A+B);
    }
    else if (A-B>A+B && A-B>A*B)
    {
        printf("%d",A-B);
    }
    else if (A*B>A+B && A*B>A-B)
    {
        printf("%d",A*B);
    }
}
