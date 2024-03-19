#include<stdio.h>

int main(void)
{
        int a, b, t;
        int res = 0;
        int i = 1;

        scanf("%d%d%d", &a,&b,&t);

        while(a*i < t+0.5) {
                res += b;
                i++;
        }

        printf("%d", res);
        return 0;
}