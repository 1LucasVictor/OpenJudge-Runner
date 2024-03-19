#include<stdio.h>
int main()
{
    int A,B;
    A>=1;
    B>=1;
    scanf("%d %d", &A, &B);

    if(A>9 || B>9)
        printf("-1\n");

    else
        printf("%d", A*B);



    return 0;

}
