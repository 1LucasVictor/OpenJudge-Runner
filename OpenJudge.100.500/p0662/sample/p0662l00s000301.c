#include <stdio.h>
int main()
{
    int a,b,c,d;
    int diff;
    while (scanf ("%d%d%d%d",&a,&b,&c,&d)!=EOF )
    {
        if (b<c || d<a ) diff = 0;
        else if ( a<=c && c<b && b<d ) diff = b-c;
        else if ( a<=c && c<d && d<b ) diff = d-c;
        else if ( c<=a && a<d && d<b ) diff = d-a;
        else if ( c<=a && a<b && b<d ) diff = b-a;
        else if ( a==c && b==d ) diff = b-a;
        printf("%d\n",diff);
    }
    return 0;
}