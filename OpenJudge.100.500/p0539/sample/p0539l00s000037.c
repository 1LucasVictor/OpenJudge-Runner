#include<stdio.h>
int main()
{
    int i,j,a,s,k;
    scanf("%d",&a);
    for(i=1; i<=sqrt(a); i++)
    {
        k=a;
        s=k/i;
        j=s*i;
        if(j==a && s>=1 && s<=9 )
        {
            printf("Yes\n");
            break;

        }
    }
    if(j!=a || s>9)
    {
        printf("No\n");
    }

}

