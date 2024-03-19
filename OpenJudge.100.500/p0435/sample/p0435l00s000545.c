#include <stdio.h>
#include <math.h>

int main(){
    int n,d;
    int x[200005], y[200005];

    scanf("%d %d", &n, &d);
    for(int i = 0; i < n; ++i){
        scanf("%d %d", &x[i], &y[i]);
    }

    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if((sqrt((double)(x[i] * x[i] + y[i] * y[i]))) <= (double)d) cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}