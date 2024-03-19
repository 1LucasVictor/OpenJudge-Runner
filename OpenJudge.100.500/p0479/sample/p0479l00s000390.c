#include<stdio.h>
int main()
{
    long int n,i,a[200000],sum,j;
    scanf("%ld",&n);
    a[0]=0;
    for(i=1;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<n;i++)
    {

        if(i==0)
        {
            sum=1;
            for(j=i+2;j<n;j++)
            {
                if(a[j]==a[1])
                    sum=sum+1;
            }
            printf("%ld\n",sum);
            sum=0;
        }


        else
        {

            if((a[i]==a[i-1])||i==n-1)
                sum=0;
            else
            {
                //sum=0;
                for(j=i+1;j<n;j++)
                {
                    if(a[j]-a[i]==1)
                        sum=sum+1;
                }
            }
            printf("%ld\n",sum);
            sum=0;
        }
    }
    return 0;

}
