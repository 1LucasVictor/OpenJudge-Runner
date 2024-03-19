#include<stdio.h>

int main()
{

    int j,i,n,k,m;
    scanf("%d",&n);
    if(n>=1 && n<=100)
    {
        for(i=1;i<=9;i++)
        {
            for(j=1;j<=9;j++)
            {
            if(n==i*j)
            {
               m=i*j;
            }

            }

        }
if(n==m)
{printf("Yes");}
else{printf("No");}



    }
    return 0;
}
