#include<stdio.h>

int main()
{
    int n,x,y,z,d,count;
    while(scanf("%d",&n)!=EOF)
    {
        count=0;
        for(x=0; x<=9; x++)
        {
            for(y=0; y<=9; y++)
            {
                for(z=0; z<=9; z++)
                {
                    for(d=0; d<=9; d++)
                    {
                        if(x+y+z+d==n)count++;
                    }
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}