#include<stdio.h>
int main()
{
    int n,i,A[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=n-1;i>=1;i--)
    {
        printf("%d ",A[i]);
    }
    printf("%d\n",A[0]);
    return 0;
}

