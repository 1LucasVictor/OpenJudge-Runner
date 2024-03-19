#include<stdio.h>
int main()
{
    int A,B,K,p;
    scanf("%d%d",&A,&B);
    p=A+B;
    if(p%2==0)
    {
    K=p/2;
    printf("%d",K);
    }
    else
        printf("IMPOSSIBLE");
    return 0;
}
