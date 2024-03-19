#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    int i, N, X, Y;
    
    scanf("%d", &N);
    for(i=0; i<N; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(a>b && a>c)
        {
            d = a;
            a = c;
            c = d;
        }
        
        else if(a<b && b>c)
        {
            d = b;
            b = c;
            c = d;
        }
        X = a*a+b*b;
        Y = c*c;
        if(X == Y)
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
