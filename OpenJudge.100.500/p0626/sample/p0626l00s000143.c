#include <stdio.h>
int main()
{
    int d,n,i,count=0;
    scanf("%d%d",&d,&n);
    if(d==0)
    {
        for(i=1;i<=101;i++)
        {
            if(i!=100)
            {
                count++;
            }
            if(count==n)
            {
                printf("%d",i);
                break;
            }
        }
    }
    else if(d==1)
    {
        for(i=100;i<=(100*101);i=i+100)
        {
            if(i!=10000)
            {
            count++;
            }
            if(count==n)
            {
                printf("%d",i);
                break;
            }
        }
    }
    else
    {
        for(i=10000;i<=(10000*101);i=i+10000)
        {
            if(i!=1000000)
            {
            count++;
            }
            if(count==n)
            {
                printf("%d",i);
                break;
            }
        }
    }
	return 0;
}