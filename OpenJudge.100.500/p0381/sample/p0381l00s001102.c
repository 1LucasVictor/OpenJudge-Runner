#include <stdio.h>

int main(void)
{
    int n = -1,x = -1;
    int p1 = 1, p2 = 2, p3 = 3;
    int cnt = 0;
    
    while (n != 0 || x != 0)
    {
        scanf("%d %d", &n, &x);
        if (n == 0 && x == 0)
            break;
        cnt = 0;
        for (p1 = 1; p1 <= n; p1 ++) {
            for (p2 = p1 + 1; p2 <= n; p2 ++) {
                for (p3 = p2 + 1; p3 <= n; p3 ++) {
                    if (p1 + p2 + p3 == x) {
                        cnt++;
                    }
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
