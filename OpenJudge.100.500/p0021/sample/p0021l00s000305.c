#include<stdio.h>

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



                for(i = 0;i < n; i++)
                {
                        for(j = i; j < n; j++)
                        {
                                sum=sum+a[j];
                                if(max < sum)
                                {
                                        max = sum;
                                }
                        }
                        sum = 0;
                }
                printf("%d\n",max);
                max = -25000000;
        }
        return 0;
}