#include<stdio.h>
int main()
{
    int A,B,l;
    scanf("%d %d",&A,&B);
    A+B;
    A-B;
    A*B;
    l=A+B;
    if(A-B>l)
    l=A-B;
    if(A*B>l)
    l=A*B;
    printf("%d",l);
    return 0;
}