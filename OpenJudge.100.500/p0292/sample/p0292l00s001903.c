#include <stdio.h>

int main()
{
int A[99],N,i,j,swap;
scanf("%d",&N);

int count=0;
for(i=0;i<=N-1;i++)
scanf("%d",&A[i]);
for(i=0;i<=N-1;i++)
{
for(j=N-1;j>=i+1;j--)
{
if(A[j]<A[j-1])
{
swap=A[j-1];
A[j-1]=A[j];
A[j]=swap;
count++;
}
}
}
for(i=0;i<=N-1;i++)
printf("%d ",A[i]);
printf("\n%d",count);
}