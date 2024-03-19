#include<stdio.h>
int main()
{
    int A,B,j,bi;
    long int g;
    scanf("%d%d",&A,&B);
    j=A+B;
    bi=A-B;
    g=A*B;
    if(A==0 && B==0)
    {
        printf("0\n");
    }
    else
    {
        if(j>bi&&j>g)
    {
        printf("%d\n",j);
    }
    else if(bi>j&&bi>g)
    {
        printf("%d\n",bi);
    }
     else if(g>bi&&g>j)
    {
        printf("%ld\n",g);
    }
    }
    return 0;
}
