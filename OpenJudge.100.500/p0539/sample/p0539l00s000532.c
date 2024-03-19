#include<stdio.h>
int main()
{
    int n,i,j,m,y=0;
    scanf("%d",&n);
    for(i=1; i<10; i++)
    {
        for(j=1; j<10; j++)
        {
            m=i*j;
            if(n==m)
            {
                printf("Yes\n");
                y++;
                break;
            }
            if(y==1)
            {
                break;
            }

        }
    }
    if(y==0)
            {
                printf("No\n");
            }
}
