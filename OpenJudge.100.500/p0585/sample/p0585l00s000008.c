#include <stdio.h>

int main() {
    int a, b , t, ans;
    int time;
    scanf("%d %d %d", &a, &b, &t);
    time = t/a + 0.5;
    if(t >= a){
        ans = b*time;
        printf("%d", ans);
    }else if(a > t){
        puts("0");
    }
    return 0;
}