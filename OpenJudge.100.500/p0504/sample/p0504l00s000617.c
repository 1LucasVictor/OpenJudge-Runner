#include<stdio.h>
int main()
{
    int ans = 0;
    int h,a;
    scanf("%d%d", &h, &a);
    while(1){
        h -= a;
        ans++;
        if(h <= 0) break;
    }
    printf("%d\n", ans);
    return 0;
}
