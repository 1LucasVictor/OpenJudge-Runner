#include<stdio.h>
int main()
{
    int haiku[4],m=0,i,n=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&haiku[i]);
    }
    for(i=0;i<3;i++)
    {
        if(haiku[i] == 5)
        {
            m++;
        }
        else if(haiku[i] == 7)
        {
            n++;
        }
    }
    if(m==2 && n==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
    
}