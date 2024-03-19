#include<stdio.h>
int main()
{
    int A,B,K;

    scanf("%d %d",&A,&B);

    if(A%2==B%2)
    {
        K = (A+B)/2;
        printf("%d\n",K);
    }

    else
    {
        printf("IMPOSSIBLE\n");
    }

    return 0;

}