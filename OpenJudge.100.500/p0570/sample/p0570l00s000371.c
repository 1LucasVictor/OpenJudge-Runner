// A - Harmony
#include <stdio.h>

int main(void){
    int a, b, ans;
    scanf("%d%d", &a, &b);
    if((ans=a+b)%2 == 0){
        printf("%d\n", ans/2);
        return 0;
    }
    printf("IMPOSSIBLE\n");
    return 0;
}