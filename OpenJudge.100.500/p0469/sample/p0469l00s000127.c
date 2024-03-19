#include<stdio.h>
int main()
{
    int k,A,B;
    scanf("%d",&k);
    scanf("%d%d",&A,&B);
    int i,j;
    for(i=A;i<=B;i++)
    {
    j=i%k;
    if(j==0)
    break;
    }
    if(j==0)
    printf("OK\n");
    else
    printf("NG\n");
    return 0;
}