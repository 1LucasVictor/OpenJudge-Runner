#include<stdio.h>
int main()
{
    int A,B,C1,C2,C3;
    scanf("%d %d", &A, &B);
    C1=A+B;
    C2=A-B;
    C3=A*B;
    if(C1>C2 && C1>C3)
    {
        printf("%d", C1);
    }
    if(C2>C3 && C2>C1)
    {
        printf("%d", C2);
    }
    else if(C3>C1 && C3>C2)
    {
        printf("%d", C3);
    }
    return 0;
}
