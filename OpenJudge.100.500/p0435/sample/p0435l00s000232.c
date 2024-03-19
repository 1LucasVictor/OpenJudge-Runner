/* ABC174 B */

#include<stdio.h>

int main(void){
    int n, i, count=0;
    long long d, x, y;
    scanf("%d %lld", &n, &d);
    for(i=0; i<n; i++){
        scanf("%lld %lld", &x, &y);
        if(x*x+y*y <= d*d){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
