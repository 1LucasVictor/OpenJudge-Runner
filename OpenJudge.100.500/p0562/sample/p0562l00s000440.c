#include <stdio.h>
#include <string.h>
int main(void)
{
    int  a,b[200000],i=0,j,m,n,x,y,z=0;
    char c[10100],s[10100];

    scanf("%d%d",&n,&m);

    while (1)
    {
        if(m<=z) break;
        z=z+n;
        i++;
    }
    printf("%d",i);  
    printf("\n");
    return 0;
}