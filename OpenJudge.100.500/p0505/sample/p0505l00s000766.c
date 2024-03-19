
#include<stdio.h>
int main()
{
    int H,N,i,sum = 0;
    scanf("%d %d",&H,&N);
    int ar[N];
    for(i = 0;i<N;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i = 0;i<N;i++)
    {
        sum += ar[i];
    }
    if(sum >= H)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
