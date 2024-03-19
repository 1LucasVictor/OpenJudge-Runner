#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    if(n<m)  printf("%d\n",n);
    if(n==m||n%m==0)  printf("0\n");
    if(n>m)
    {
       printf("1\n");
    }

}
