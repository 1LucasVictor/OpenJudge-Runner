#include <stdio.h>
#include <math.h>
int main()
{
    long long int i, j, c=0,count=0;
    int n;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
    }
    for(j=0;j<n;j++)
    {

            if(ar[j]==2)
            {
                    c=0;

            }
            else
            {
            for(i=2; i<=sqrt(ar[j]); ++i)
            {

                if (ar[j]%i!=0)
                {
                    c=0;

                }
                else if (ar[j]%i==0)
                {
                    c=1;
                    break;
                }
                else continue;
            }
            }
            if(c==0)
            {
                count++;
            }

    }

    printf("%lld\n",count);

    return 0;
}

