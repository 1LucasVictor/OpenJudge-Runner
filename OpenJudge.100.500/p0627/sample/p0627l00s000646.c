#include<stdio.h>
int main()
{
    int A,B,T,S,M,R;
    scanf("%d %d",&A,&B);
    T=A+B;
    S=A-B;
    M=A*B;
    R=T;
    if(S>R)
        {R=S;}
    if(M>R)
        {R=M;}
    printf("%d\n",R);
    return 0;
    }
