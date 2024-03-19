#include <stdio.h>
int main () 
{
int n,i,j;
int a[200010];

scanf("%d",&n);

for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    if(i!=0){
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                printf("NO");
                return 0;
            }
        }
    }
}



printf("YES");
return 0;
}