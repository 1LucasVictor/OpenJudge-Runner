#include<stdio.h>
int main()
{
    int A,B,C,x;
    scanf("%d%d%d",&A,&B,&C);
    x=A-C;
    if(x==0)
    {
        printf("%d\n",B);
    }
    else if(x>0)
    {
        if(x<B)
        printf("%d\n",B-x);
        else
            printf("0\n");

    }
    else if(x<0)
    {
        printf("%d\n",B-x);
    }

    return 0;
}
