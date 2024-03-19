#include<stdio.h>

int main(){
    int a,b,c,k;
    scanf("%d%d%d%d", &a,&b,&c,&k);

    int ans;
    if( k <= a ) ans = k;
    if( a < k && k <= a+b ) ans = a;
    if( a+b < k ) ans = a-(k-(a+b));

    printf("%d\n", ans);
    return 0;
}

