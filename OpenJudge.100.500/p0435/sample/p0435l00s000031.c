#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,d,cnt=0,i;
    scanf("%d %d",&n,&d);
    double a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%lf %lf",&a[i],&b[i]);
        if(sqrt(a[i]*a[i]+b[i]*b[i])<=d)
        {
            cnt++;
        }
    }
    printf("%d\n",cnt);
}
