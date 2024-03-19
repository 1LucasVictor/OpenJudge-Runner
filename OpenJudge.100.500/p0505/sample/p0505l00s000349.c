
#include<stdio.h>
int main()
{
    int H,N,sum = 0;
    scanf("%d %d",&H,&N);
    int ar[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&ar[i]);
        sum += ar[i];
    }
    if(sum >= H)
    {
        printf("Yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}
