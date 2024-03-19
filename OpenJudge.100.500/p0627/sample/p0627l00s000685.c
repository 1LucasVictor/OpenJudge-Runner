#include<stdio.h>
int main()
{
    int A,B;
    int C,D,E;
    scanf("%d%d",&A,&B);
    C=A+B;
    D=A-B;
    E=A*B;

    if(C>D&&C>E)
    {
        printf(" %d",C);
    }
    else if(D>C && D>E)
    {
        printf("%d",D);
    }
    else if(E>C&&E>D)
    {
        printf("%d",E);
    }
    else if(C==0&&D==0&&E==0)
    {
        printf("0");
    }


    return 0;
}
