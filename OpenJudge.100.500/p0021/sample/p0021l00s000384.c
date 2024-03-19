#include<stdio.h>
#include<stdlib.h>

int main(void)
{

        int max = 0,bigmax = 0;
        short *a;
        int n=0;
        int i = 0,j = 0,k=0;

        while(1)
        {
                scanf("%d", &n);
                int sum[n];
                a=(short *)malloc(sizeof(short)*5000);
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
                                sum[i] = 0;
                                for(j = k; j < i+1; j++)
                                {
                                        sum[i]=sum[i]+a[j];
                                }
                                if(max < sum[i])
                                {
                                        max = sum[i];
                                }
                        }
                }
                printf("%d\n",max);
                max=0;
        }
        free(a);
        return 0;
}