#include<stdio.h>
int main()
{
    int n;
    int i,j;
    float f;
    scanf("%d",&n);
    int k=0;
    for(i=1;i<=9;i++)
    {
        j=n/i;
        if((n%i==0)&& (j>=1 && j<=9))
        {
        k++;
        break;
        }

    }
    if(k>0)
        printf("Yes");
    else
        printf("No");
}
