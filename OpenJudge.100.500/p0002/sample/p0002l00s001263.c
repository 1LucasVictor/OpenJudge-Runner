#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,c,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            scanf("%d%d%d",&a,&b,&c);
            if(((a*a)+(b*b))==(c*c))printf("YES\n");
                else printf("NO\n");

    }
    return 0;
}