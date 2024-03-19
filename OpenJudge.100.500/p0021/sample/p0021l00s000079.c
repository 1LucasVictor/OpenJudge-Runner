#include<stdio.h>
#include<stdlib.h>

int main(void)
{

        int max = -25000000;
        int n=0,sum=0;
        int i = 0,j = 0,k=0;

        while(1)
        {
                scanf("%d", &n);
                int a[n];
                if(n == 0)
                {
                        break;
                }
                for(i = 0; i < n; i++)
                {
                        scanf("%d", &a[i]);
                }

                for(k = 0; k < n; k++)
                {
                        for(i = 0;i < n-k; i++)
                        {
                                for(j = k; j < i+1; j++)
                                {
                                        sum=sum+a[j];
                                }
                                if(max < sum)
                                {
                                        max = sum;
                                }
                                sum = 0;
                        }
                }
                printf("%d\n",max);
                max = -25000000;
        }
        return 0;
}