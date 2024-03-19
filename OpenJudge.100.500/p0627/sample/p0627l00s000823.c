#include<stdio.h>

    // SUB ID: UG02-53-20-001

int main()
{

    int A, B;
    scanf("%d%d",&A,&B);

    if(A+B>=A-B&&A+B>=A*B)
        printf("%d",A+B);
    else if(A+B>=A-B&&A+B>=A*B)
        printf("%d",A+B);
    else if(A-B>=A+B&&A-B>=A*B)
        printf("%d",A-B);
    else if(A*B>=A+B&&A*B>=A-B)
        printf("%d",A*B);

    return 0;
}