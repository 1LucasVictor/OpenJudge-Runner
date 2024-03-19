#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,e=0,d=0;
    scanf("%d%d%d",&a,&b,&c);
    if(a==5)
        d++;
    else if(a==7)
        e++;
    if(b==5)
        d++;
    else if(b==7)
        e++;
    if(c==5)
        d++;
    else if(c==7)
        e++;
   if(d==2&&e==1)
    printf("YES\n");
   else printf("NO\n");
    return 0;
}
