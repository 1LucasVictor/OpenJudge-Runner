#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b&&a<c)
    {
        printf ("%d %d %d\n",a,b,c);
    }
    else if(b<c&&b<a)
    {
        printf ("%d %d %d\n",b,a,c);
    }
    else if(c<a&&c<b)
    {
        printf ("%d %d %d\n",c,a,b);
    }
    else
        return 0;
}

