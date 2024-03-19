#include<stdio.h>
int n;
int num;
int i,j,k,l;
int main()
{
    while(scanf("%d",&n) != -1)
    {
        num = 0;
        for(i = 0;i < 10;i++)
        {
            for(j = 0;j < 10;j++)
            {
                for(k = 0;k < 10;k++)
                {
                    for(l = 0;l < 10;l++)
                    {
                      if(n == i + j + k + l)
                      {
                          num++;
                      }
                    }
                }
            }
        }
        printf("%d\n",num);



    }
    return 0;
}