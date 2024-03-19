#include<stdio.h>
int main()
{
    int A[100],n,i,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n/2;i++)
    {
        temp=A[i];
        A[i]=A[n-i-1];
        A[n-i-1]=temp;
    }
    for(i=0;i<n-1;i++){
        printf("%d ",A[i]);}
        printf("%d\n",A[n-1]);
        return 0;
}

