#include<stdio.h>
int main()
{
    int A,B,C,x;
    scanf("%d %d %d",&A,&B,&C);
    x=A-B;
    if(x<C)
    {
        printf("%d\n",C-x);
    }
    else
       printf("0\n");
    return 0;
}
