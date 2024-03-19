#include <stdio.h>
#include <math.h>
int main(void){
    int n, d;
    int ans=0;
    scanf("%d %d", &n, &d);
    for(int i=0; i<n; i++){
        long int x, y;
        scanf("%ld %ld", &x, &y);
        if(sqrt(x*x+y*y)<=d)ans++;
    }
    printf("%d\n", ans);
}
