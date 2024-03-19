#include <stdio.h>
#include <string.h>
int main(void)
{
    int a[1100],b,m,n,i,j=0,k=0,l=0,p=0,x=0,y=0,z=0;
    char s[1000],ss[1000],c;

    scanf("%d%d",&x,&y);

    for (size_t i = 0; i < y; i++)
    {
        scanf("%d",&a[i]);
        k=k+a[i];
    }
    if(k>=x) printf("Yes\n");
    else printf("No\n");
    return 0;
}