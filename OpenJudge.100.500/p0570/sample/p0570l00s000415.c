#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int A,B,K;
    scanf("%d %d",&A,&B);

    if((A+B)%2==0)
    {
        K=(A+B)/2;
        printf("%d\n",K);
    }
    else
        printf("IMPOSSIBLE\n");

    return 0;
}

