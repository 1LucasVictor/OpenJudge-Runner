#include <stdio.h>
int main()
{
    int n,a[200000],i,b[200000],j,f=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        b[i]=a[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==b[j]){f=0;break;}
        }
    if(f==0)break;
    }
    if(f==0)printf("NO");
    else if(f==1)printf("YES");
    return 0;
}
