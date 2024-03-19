#include <stdio.h>
int main ()
{
    int a,b,s,jg,i;
    while(scanf("%d %d",&a,&b)==2)
    {
        s=a*b;
        if (s%2==0)
            printf ("Even\n");
        else
            printf ("Odd\n");
            jg=1;
    }
    return 0;
}
