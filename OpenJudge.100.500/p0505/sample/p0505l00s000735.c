#include <stdio.h>
int main()
{
    int i,H,N,A[100010],sum=0;
    scanf("%d%d",&H,&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    if(sum>=H)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
