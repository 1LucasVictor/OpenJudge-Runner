#include<stdio.h>
int main()
{
    int A,B,c,d,e;
    scanf("%d %d",&A,&B);
    c=A+B;
    d=A-B;
    e=A*B;

    if(c>=d && c>=e)
    {
        printf("%d",c);
    }

     else if(d>=c && d>=e)
    {
        printf("%d",d);
    }

     else if(e>=d && e>=c)
    {
        printf("%d",e);
    }

    else if(A==0 && B==0)
    {
        printf("%d",A);
    }

}
