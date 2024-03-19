#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,d,cnt=0,i;
    scanf("%d %d",&n,&d);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
        if(sqrt(a[i]*a[i]+b[i]*b[i])<=d)
        {
            cnt++;
        }
    }
    printf("%d\n",cnt);
}
