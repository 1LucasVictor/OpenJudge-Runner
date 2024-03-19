
#include<stdio.h>
int main()
{
    int H,N;
    scanf("%d %d",&H,&N);
    int ar[N];
    for(int i = 0;i<N;i++)
    {
        scanf("%d",&ar[i]);
    }
    int sum = 0;
    for(int j = 0;j<N;j++)
    {
        sum += ar[j];
    }
    if(sum > H)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
