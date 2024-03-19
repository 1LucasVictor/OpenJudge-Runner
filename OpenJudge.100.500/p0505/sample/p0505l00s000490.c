#include<stdio.h>
int main()
{
    int H,N,A[6],i,sum = 0;

    scanf("%d",&H);

    scanf("%d",&N);


    for(i = 0; i < N; i++)
    {

       scanf("%d",&A[i]);

       sum = sum + A[i];

    }

    if(sum >= H)
    {
        printf("Yes\n");
    }

    else
        printf("No\n");


return 0;
}

