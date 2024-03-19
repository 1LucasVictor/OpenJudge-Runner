#include<stdio.h>
int main()
{
    int A,B,C,D,E;
    scanf("%d %d",&A,&B);
    C=A+B;
    D=A-B;
    E=A*B;
    if(C>D && C>E)
    {
        printf("%d\n",C);
    }
    else if (D>C && D>E)
    {
        printf("%d\n",D);
    }
    else if(A==0 && B==0)
    {
        printf("%d\n",A);
    }

}
