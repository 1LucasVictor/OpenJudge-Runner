#include<stdio.h>
int main()
{
    int N, i, a, b, c;
    scanf("%d", &N);
    for(i=1;i<=N;i++)
    {
        scanf("%d %d %d", &a,&b,&c);
        if(a*a == b*b+c*c || b*b == a*a+c*c || c*c == a*a+b*b)
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

