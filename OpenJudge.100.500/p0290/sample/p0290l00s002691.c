#include<stdio.h>
#include<math.h>
int main()
{
    int n,num[10000],i,d,prime=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    for(i=0;i<n;i++)
    {
        for(d=2;d<=sqrt(num[i]);d++)
        {
            if(num[i]%d==0)
            {
                break;
            }
        }
        if(d>sqrt(num[i]))
        {
            prime++;
        }
    }
    printf("%d\n",prime);
    return 0;
}

