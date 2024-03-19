#include<stdio.h>

int main(void)
{
        int a, b, k, n, i;

        scanf("%d%d%d", &a,&b,&k);

        if(a > b) {
                n = a;
        } else {
                n = b;
        }

        for(i = n; i > 1; i--) {
                if(a%i==0 && b%i==0) {
                        if(i == k) {
                                printf("%d", i);
                                break;
                        }
                }
        }
        return 0;
}
