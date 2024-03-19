#include<stdio.h>
int main()
{
    int n,a,b,c,i,j,x,y,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        x=a*a;
        y=b*b;
        z=c*c;
        if(x+y==z || x+z==y || y+z==x)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}