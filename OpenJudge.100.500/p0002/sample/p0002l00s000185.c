#include <stdio.h>

int main()
{

    int a, b,c,n ,i;
    scanf("%d", &n);

    while(n--)
    {
         scanf("%d %d %d",&a, &b, &c);

        if(((c*c)==(a*a)+(b*b)) || ((b*b)==(a*a)+(b*b)) || ((a*a)==(b*b)+(c*c)))
            printf("YES\n");
        else
            printf("NO\n");

    }




    return 0;
}