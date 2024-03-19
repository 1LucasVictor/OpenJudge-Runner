#include <stdio.h>

int main(){
        int a, b, t;
        scanf("%d %d %d\n", &a, &b, &t);
        int aa = 2*a;
        int tt = 2*t + 1;
        int ans = (tt / aa) * b;
        printf("%d\n", ans);
        return 0;
}