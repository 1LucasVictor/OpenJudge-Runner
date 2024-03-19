#include<stdio.h>
int main()
{
    int n,i,j,k,l,add;
    while(scanf("%d",&n)!=EOF)
        {
            add=0;
            for(i=0;i<=9;i++)
            {
                for(j=0;j<=9;j++)
                {
                    for(k=0;k<=9;k++)
                    {
                    for(l=0;l<=9;l++)
                        {
                            if(i+j+k+l==n)add++;
                        }
                    }
                }
            }
          printf("%d\n",add);
    }
    return 0;
}