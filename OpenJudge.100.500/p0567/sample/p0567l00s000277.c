#include<stdio.h>
int main()
{
    int A,B,C,D,E;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);

    D=A-B;
    E=C-D;

    if(E>0)
    {
        printf("%d\n",E);
    }
    else
    {
        printf(" 0 \n");
    }
     return 0;
}
