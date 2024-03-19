#include<stdio.h>

int main()
{
    int A,B,K,i,x;
    int div[10];
    int n=0;
    scanf("%d %d %d", &A, &B, &K);
    if(A<B)
        x = A;
    else
        x=B;
    
    n=0;
    for(i=1; i<=x; i++)
    {
        if(A%i==0 && B%i==0)
        {
            div[n]=i;
            n++;
        }


    }

    printf("%d", div[K-1]);

    return 0;

}
