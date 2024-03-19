#include<stdio.h>
int main()
{
    int H,A[100],sum=0,i,n;
    scanf("%d %d",&H,&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
        sum=sum+A[i];
    }
    if(H<=sum)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

}
