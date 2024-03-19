#include <stdio.h>
int main () 
{
int n,i,j;
int a[200010];

scanf("%d",&n);

for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            printf("NO");
            return 0;
        }
    }
}

printf("YES");
return 0;
}