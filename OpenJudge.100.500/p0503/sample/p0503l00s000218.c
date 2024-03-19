#include<stdio.h>
#include<math.h>
int main()
{
    int n, count=0;
    scanf(" %d",&n);
    if(n>=2&&n<=200000)
    {
        int a[n];
        for(int i=0; i<n; i++)
        {
            scanf(" %d",&a[i]);
            if(a[i]>=1&&a[i]<=pow(10,9))
            {
                for(int j=0; j<i; j++)
                {
                    if(a[i]==a[j])
                        count++;
                }
            }
        }
        if(count==0)
                    printf("YES\n");
                else
                    printf("NO\n");
    }
}