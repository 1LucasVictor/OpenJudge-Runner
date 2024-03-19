#include <stdio.h>

int main()
{

    long int n,i,a,b,c ;
    scanf("%ld", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%ld %ld %ld", &a, &b ,&c);
        if(((a*a)==((b*b)+(c*c))) || ((b*b)==((a*a)+(c*c))) || ((c*c)==((b*b)+(a*a))) )
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
    return 0;
}