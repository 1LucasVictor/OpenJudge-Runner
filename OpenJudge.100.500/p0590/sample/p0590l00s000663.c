#include <stdio.h>
int main()
{
    int a,b,c,d,e,k,i,j,flag = 0;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);
    for(i=a;i<=d;i++)
    {
        for(j=b;j<=e;j++)
        {
            if((j-i)>k)
            {
                flag = 1;
            }
        }
    }
    if(flag == 0)
    {
        printf("Yay!\n");
    }
    else
    {
        printf(":(\n");
    }
    return 0;
}
