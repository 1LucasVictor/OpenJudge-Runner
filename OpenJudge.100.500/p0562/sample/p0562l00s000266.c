#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d%d",&A,&B);
    int c = 1;
    while(A<B)
    {
        c++;
        A=A+A-1;
    }
    printf("%d\n",c);
}
