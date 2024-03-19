#include<stdio.h>
int main()
{
    int A, B, x, y, z;
    scanf("%d",&A);
    scanf("%d",&B);
    x=A+B;
    y=A-B;
    z=A*B;
    if (A==0 && B==0)printf("0\n");
    else if(x>=y && x>z)
    {
        printf("%d\n",x);
    }
    else if(y>x && y>z)
    {
        printf("%d\n",y);
    }
    else if(z>x && z>y) printf("%d\n",z);
    return 0;
}