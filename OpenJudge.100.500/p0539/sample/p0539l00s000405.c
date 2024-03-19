#include <stdio.h>
int main()
{
    int a,i,j,temp=0;
    scanf("%d",&a);
    for(i=1;i<10;i++)
    {
        for(j=1;j<10;j++)
        {
            if(j*i==a)
                temp=1;
        }
    }
    if(temp)
        printf("Yes\n");
    else
        printf("No\n");
}
