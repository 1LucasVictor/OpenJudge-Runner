#include<stdio.h>
int main(void)
    {
    int N,A,B,X ;
    scanf("%d%d%d",&N,&A,&B);
    X=A*N;
    if(X<B)
    {
    printf("%d\n",X);
    }
    else
    {
    printf("%d\n",B);
    }
}        