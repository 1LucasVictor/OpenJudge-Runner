#include <stdio.h>

int main()
{
    long long int health;
    int n, move, i, j, top = -1;
    _Bool iswin = 0;

    scanf("%lld %d", &health, &n);
    int ara[n];

    for(i = 0; i<n; i++)
    {
        scanf("%d", &move);

        for(j = 0; j<=top; j++)
        {
            if(move == ara[j])
            {
                iswin = 0;
                break;
            }
        }

        /*Stack entry*/
        top++;
        ara[top] = move;

        health-=move;

        if(health<=0)
        {
            iswin = 1;
            break;
        }
    }

    if(health<=0 || iswin == 1)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
