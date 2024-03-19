#include<stdio.h>

int main(void)
{

        int max = 0,bigmax = -500000000;
        short a[5000];
        int sum[5000],n;
        int i = 0,j = 0,k=0;
        int x=0;

        while(1)
        {
                scanf("%d", &n);
                if(n == 0)
                {
                        break;
                }
                for(i = 0; i < n; i++)
                {
                        scanf("%hd", &a[i]);
                }

                for(k = 0; k < n; k++)
                {
                        for(i = 0;i < n-k; i++)
                        {
                                for(j = k; j < i+1; j++)
                                {
                                        sum[i]=sum[i]+a[j];
                                }
                        }
                        max = sum[0];
                        for(x = 0;x < n; x++)
                        {
                                if(max < sum[x])
                                {
                                        max = sum[x];
                                }
                        }
                        if(max >= bigmax)
                        {
                                bigmax = max;
                        }

                        for(i=0;i<n;i++)
                        {
                                sum[i] = 0;
                        }
                }
                printf("%d\n",bigmax);
                bigmax=-500000000;
        }
        return 0;

}