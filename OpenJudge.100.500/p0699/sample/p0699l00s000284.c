#include <stdio.h>

int main(void)
{
    int n[3];
    int i, count5 = 0, count7 = 0;
    scanf("%d%d%d", &n[0], &n[1], &n[2]);

    for(i = 0; i < 3; i++)
    {
        if(n[i] == 5) count5++;
        else if (n[i] == 7) count7++;
    }

    if (count5 == 2 && count7 == 1) printf("YES\n");
    else printf("NO\n");

    return (0);
}
