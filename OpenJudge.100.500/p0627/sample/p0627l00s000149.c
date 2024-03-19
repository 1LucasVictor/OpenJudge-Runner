#include<stdio.h>
int main()
{
    int a,b;
    long int j,bi,g;
    scanf("%d%d",&a,&b);
    j=a+b;
    bi=a-b;
    g=a*b;
    if(j>bi&&j>g)
    {
        printf("%ld\n",j);
    }
    else if(bi>j&&bi>g)
    {
        printf("%ld\n",bi);
    }
     else if(g>bi&&g>j)
    {
        printf("%ld\n",g);
    }
    return 0;
}
