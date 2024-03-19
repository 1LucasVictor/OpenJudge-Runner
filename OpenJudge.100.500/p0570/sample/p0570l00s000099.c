#include<stdio.h>
int main()
{
    int a,b,d,div;

    scanf("%d %d",&a,&b);

    if(a>b)
    {
        d = (a-b);
        div = d/2;

        if(d%2==0) printf("%d\n",div+b);

        else printf("IMPOSSIBLE\n");
    }

    else if(a<b)
        {
            d = (b-a);
            div = d/2;

            if(d%2==0) printf("%d\n",div+a);

            else printf("IMPOSSIBLE\n");
        }
        
    return 0;
}
