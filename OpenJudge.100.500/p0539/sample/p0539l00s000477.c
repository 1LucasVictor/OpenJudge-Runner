#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            k=i*j;
            if(k==n)
            {
                printf("Yes");
                return 0;
            }
        }
    }
    printf("No");
}
