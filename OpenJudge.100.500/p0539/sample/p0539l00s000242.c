#include<stdio.h>
int main()
{
    int n,i,d,j,s=0;

    scanf("%d",&n);

    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i*j==n) s++;

            else continue;

        }
    }

     if(s>=1) printf("Yes\n");

     else printf("No\n");


return 0;
}
