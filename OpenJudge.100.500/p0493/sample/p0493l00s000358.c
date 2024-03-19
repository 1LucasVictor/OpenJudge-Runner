#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    int f00 = x / 500;
    int ans = f00 * 1000;
    x -= f00 * 500;

    int f = x / 5;
    ans += f * 5;
    
    printf("%d\n", ans);
    return 0;
}