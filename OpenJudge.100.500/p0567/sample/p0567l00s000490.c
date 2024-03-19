#include <stdio.h>

int main(void)
{
    int a, b, c;
    int ans;

    scanf("%d %d %d", &a, &b, &c);

    if(b+c > a){
        ans = b+c-a;
    }else if(b+c  <= a){
        ans = 0;
    }

    printf("%d\n", ans);

    return 0;
}